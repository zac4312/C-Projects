#include <stdio.h>
#include "num2word.h"

int isValidHour(int hour)
{
    if (hour >= 0 && hour <= 23) { return 1; }
    else { return 0; }
}

int isValidMinutes(int minute)
{
    if (minute >= 0 && minute <= 59) { return 1; }
    else { return 0; }
}

void convert(int time)
{
    int minute, hour, minute_tens, minute_ones;
    int is_pm;
    char *char_hour;

    hour = time / 100;
    minute = time % 100;
    is_pm = (hour >= 12);

    hour %= 12;
    if (hour == 0) { hour = 12; }

    if (hour >= 10) {
        char_hour = teens2word(hour);
    } else {
        char_hour = ones2word(hour);
    }

    if (is_pm) {
        if (hour >= 5) {
            printf("%04d is %d:%02d p.m.\nIt is now %s ",
                   time, hour, minute, char_hour);
        } else {
            printf("%04d is %d:%02d p.m.\nIt is now %s ",
                   time, hour, minute, char_hour);
        }
    } else {
        printf("%04d is %d:%02d a.m.\nIt is now %s ",
               time, hour, minute, char_hour);
    }

    if (minute % 10 == 0) {
        if (minute == 0) {
            printf("o'Clock");
        } else {
            printf("%s", tens2word(minute));
        }
    } else {
        minute_tens = (minute / 10) * 10;
        minute_ones = minute % 10;
        if (minute_tens == 0) {
            printf("o'Clock %s", ones2word(minute_ones));
        } else {
            printf("%s %s", tens2word(minute_tens),
                   ones2word(minute_ones));
        }
    }

    if (is_pm && hour >= 5 && hour != 12) {
        printf(" in the evening");
    } else if (is_pm) {
        printf(" in the afternoon");
    } else {
        printf(" in the morning");
    }
}
