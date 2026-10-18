#include <stdio.h>
#include <time.h>
#include "stdlib.h"
#include "sort.h"

int main(void) {
   
    int i;
    double num[10];
    srand(time(NULL));

    int Ub = 10000; int Lb = 10;

    //Genrate numbers
    for (i = 0; i < 10; i++ ) {
        double rand_num = rand() % (Ub - Lb + 1) + Lb ;
        num[i] = (rand_num / 100);
        printf("%f, ", num[i]);
    } printf("\n");

    sort(num);

    return  0;
}

