#include <stdio.h>

void print_header() 
{
    printf ("%24s\n", "MyKitchen"); 
    printf ("%29s\n", "Taft Avenue, Manila"); 
    printf ("%26s\n", "Your Receipt");
}

void print_footer() 
{
    printf("%30s\n", "Thank you very much!");
    printf("%27s\n", "See you again!");
}

int main() 
{
    int date, month, year, day;
    date = 1102021;
    month = date%100;
    day = date%10000;
    year = date%10;
    
    printf("Date: %d/%d/%d", month, day ,year);
    

     return 0;
}

