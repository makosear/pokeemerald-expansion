#include "global.h"
#include "string_util.h"
#include "strings.h"
#include "text.h"
#include "rtc.h"
#include "fake_rtc.h"
#include "event_data.h"

struct Time *FakeRtc_GetCurrentTime(void)
{
#if OW_USE_FAKE_RTC
    return &gSaveBlock3Ptr->fakeRTC;
#else
    return NULL;
#endif
}

void FakeRtc_GetRawInfo(struct SiiRtcInfo *rtc)
{
    struct Time* time = FakeRtc_GetCurrentTime();
    rtc->second = time->seconds;
    rtc->minute = time->minutes;
    rtc->hour = time->hours;
    rtc->day = time->days;
    rtc->month = time->months;
    rtc->year = time->years;
    rtc->dayOfWeek = time->dayOfWeek;
}

void FakeRtc_TickTimeForward(void)
{
    if (!OW_USE_FAKE_RTC)
        return;

    if (FlagGet(OW_FLAG_PAUSE_TIME))
        return;

    FakeRtc_AdvanceTimeBy(0, 0, 0, 0, 0, FakeRtc_GetSecondsRatio());

}

void FakeRtc_ResetDayCount(void)
{
    struct Time* time = FakeRtc_GetCurrentTime();
    time->days = 1;
    //RtcSetDayOfWeek(DAY_MONDAY);
}

void FakeRtc_AdvanceTimeBy(u32 years, u32 months, u32 days, u32 hours, u32 minutes, u32 seconds)
{
    struct Time* time = FakeRtc_GetCurrentTime();
    if (time->seconds < 0)
    {
        time->seconds += SECONDS_PER_MINUTE;
        --time->minutes;
    }

    if (time->minutes < 0)
    {
        time->minutes += MINUTES_PER_HOUR;
        --time->hours;
    }

    if (time->hours < 0)
    {
        time->hours += HOURS_PER_DAY;
        --time->days;
        --time->dayOfWeek;
    }

    if (time->dayOfWeek < 0)
    {
        time->dayOfWeek += DAYS_PER_WEEK;
    }

    if(time->days < 1)
    {
        time->days += DAYS_PER_MONTH;
        --time->months;
    }

    if (time->months < 1)
    {
        time->months += MONTHS_PER_YEAR;
        --time->years;
    }
    seconds += time->seconds;
    minutes += time->minutes;
    hours += time->hours;
    days += time->days;
    months += time->months;
    years += time->years;
    u32 dayOfWeek = time->dayOfWeek;

    while(seconds >= SECONDS_PER_MINUTE)
    {
        //MgbaPrintf(MGBA_LOG_WARN, "seconds higher than minute");
        minutes++;
        seconds -= SECONDS_PER_MINUTE;
    }

    while(minutes >= MINUTES_PER_HOUR)
    {
        //MgbaPrintf(MGBA_LOG_WARN, "minutes higher than hour");

        hours++;
        minutes -= MINUTES_PER_HOUR;
    }

    while(hours >= HOURS_PER_DAY)
    {
        MgbaPrintf(MGBA_LOG_WARN, "day of week before: %u", dayOfWeek);
        MgbaPrintf(MGBA_LOG_WARN, "hours higher than day");
        days++;
        dayOfWeek++;
        MgbaPrintf(MGBA_LOG_WARN, "day of week after: %u", dayOfWeek);
        hours -= HOURS_PER_DAY;
    }

    while(dayOfWeek >= DAYS_PER_WEEK)
    {
        MgbaPrintf(MGBA_LOG_WARN, "day went over the index 6"); //so like sunday + 1, which should cycle back to 0, so monday
        dayOfWeek -= DAYS_PER_WEEK;
        MgbaPrintf(MGBA_LOG_WARN, "day of week after index 6: %u", dayOfWeek);
    }

    while(days > DAYS_PER_MONTH)
    {
        MgbaPrintf(MGBA_LOG_WARN, "days higher than month");
        months++;
        days -= DAYS_PER_MONTH;
    }

    while(months > MONTHS_PER_YEAR)
    {
        MgbaPrintf(MGBA_LOG_WARN, "months higher than year");
        years++;
        months -= MONTHS_PER_YEAR;
    }

    time->seconds = seconds;
    time->minutes = minutes;
    time->hours = hours;
    time->days = days;
    time->months = months;
    time->years = years;
    MgbaPrintf(MGBA_LOG_WARN, "day of week before the setTime: %u", time->dayOfWeek);
    time->dayOfWeek = dayOfWeek;
    MgbaPrintf(MGBA_LOG_WARN, "day of week after the setTime: %u", time->dayOfWeek);
}

void FakeRtc_ManuallySetTime(u32 year, u32 month, u32 day, u32 hour, u32 minute, u32 second)
{
    struct Time diff, target;
    RtcCalcLocalTime();

    target.years = year;
    target.months = month;
    target.days = day;
    target.hours = hour;
    target.minutes = minute;
    target.seconds = second;

    CalcTimeDifference(&diff, &gLocalTime, &target);
    FakeRtc_AdvanceTimeBy(diff.years, diff.months, diff.days, diff.hours, diff.minutes, diff.seconds);
}

u32 FakeRtc_GetSecondsRatio(void)
{
    return (OW_ALTERED_TIME_RATIO == GEN_8_PLA) ? 60 :
           (OW_ALTERED_TIME_RATIO == GEN_9)     ? 20 :
           (OW_ALTERED_TIME_RATIO == SV_STYLE)  ? 85 :
                                                  1;
}

STATIC_ASSERT((OW_FLAG_PAUSE_TIME == 0 || OW_USE_FAKE_RTC == TRUE), FakeRtcMustBeTrueToPauseTime);

void Script_PauseFakeRtc(void)
{
    FlagSet(OW_FLAG_PAUSE_TIME);
}

void Script_ResumeFakeRtc(void)
{
    FlagClear(OW_FLAG_PAUSE_TIME);
}

void Script_ToggleFakeRtc(void)
{
    FlagToggle(OW_FLAG_PAUSE_TIME);
}
