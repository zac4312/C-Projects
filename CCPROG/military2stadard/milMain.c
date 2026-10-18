#include <stdio.h>
#include "milTo12.h"

int main()
{ 
    int nMilTime;
    // You are NOT allowed to declare additional variable

    printf("Enter military time: ");
    scanf("%d", &nMilTime);

    if ( nMilTime >= 0 && isValidHour(nMilTime / 100) &&
            isValidMinutes(nMilTime % 100) )
    { convert(nMilTime); } 
    else { printf("Invalid Input\n"); }

   return 0;
}
