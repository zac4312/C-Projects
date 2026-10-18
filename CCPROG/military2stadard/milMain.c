#include <stdio.h>
#include "milTo12.h"

int main()
{  
    int nMilTime;
    // You are NOT allowed to declare additional variables
   
    printf("Enter military time: ");
    scanf("%u", &nMilTime);
   
    if ( isValidHour(nMilTime / 100) && 
            isValidMinutes(nMilTime % 100) ) 
    {        
        convert(nMilTime);
    } else { printf("Invalid Input\n"); }

   return 0;
}
