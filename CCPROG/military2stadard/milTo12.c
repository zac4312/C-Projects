#include <stdio.h>
#include "num2word.h"
int isValidHour(int hour) 
{
    if (hour <= 24) { return 1; }
    else { return 0; }
}

int isValidMinutes(int minute) 
{    
   if (minute <= 59) { return 1; }
   else { return 0; }
}

void convert(int time) 
{
    int minute, hour;
    char* char_minute;
    char* char_hour; 

    hour = time / 100; 
    minute =  time % 100;

    if (hour >= 12) {

        hour -= 12;

        if (minute % 10 == 0 ) {

            if (hour >= 5) {
                char_hour = ones2word(hour);
                char_minute = tens2word(minute);
                printf("%d is %d:%02d p.m.\nIt is now %s %s in the evening",time, hour, minute, char_hour, char_minute);
                tens2word(minute);
            }

            else if (hour <= 4) {
                char_hour = ones2word(hour);
                char_minute = tens2word(minute);
                printf("%d is %d:%02d p.m.\nIt is now %s %s in the afternoon",time, hour, minute, char_hour, char_minute);
            }
        }

        else {
             if (hour >= 5) {
                char_hour = ones2word(hour);
                char_minute = ones2word(minute);
                printf("%d is %d:%02d p.m.\nIt is now %s o'%s in the evening",time, hour, minute, char_hour, char_minute);
           } else if (hour <= 4) {
                char_hour = ones2word(hour);
                char_minute = ones2word(minute);
                printf("%d is %d:%02d p.m.\nIt is now %s o'%s in the afternoon",time, hour, minute, char_hour, char_minute);
             }
               
        }
    }

    else if (hour < 12) {
        if (minute % 10 == 0 ) {
            char_hour = ones2word(hour);
            char_minute = tens(minute);
            printf("%d is %d:%02d a.m.\nIt is now %s o'%s in the morning",time, hour, minute, char_hour, char_minute);
        }

        else {
            char_hour = ones2word(hour);
            char_minute = ones2word(minute);
            printf("%d is %d:%02d a.m.\nIt is now %s o'%s in the morning",time, hour, minute, char_hour, char_minute);
         }
    }

    else if (hour == 00) {
        hour += 12;

        if (minute % 10 == 0) {
            char_hour = ones2word(hour);
            char_minute = tens2word(minute);
            printf("%d is %d:%02d p.m\nIt is now %s %s in the morning",time, hour, minute, char_hour, char_minute);
        }
        else {
            char_hour = ones2word(hour);
            char_minute = ones2word(minute);
            printf("%d is %d:%02d a.m.\nIt is now %s o'%s in the morning",time, hour, minute, char_hour, char_minute);

        }
    }
} 

