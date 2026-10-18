#include <stdio.h>
int get_mean(double num[]) {
   
    int i;
    double total;

    for (i = 0; i < 10; i++) {    
        total = total + num[i];
    } 

    double mean;
    mean = total/10;
    printf("Mean = %f ", mean);
    printf("\n");
    
    return mean;
}

int get_mode(double num[]) {

    return 1;
}

int get_median(double num[]) {
    
    return 1;
}
