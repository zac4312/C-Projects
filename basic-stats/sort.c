#include <stdio.h>
void sort(double n[]) {
    
    int i;    
    double value = n[i+1]; 
    printf("sorted values:\n");

    for (i=0; i < 10; i++) {        
        
        for (i=i; n[i] > n[i+1]; i++ ) {
            
            value = n[i];
            if (n[i] < n[i+1]) {                

           }

        }

        printf("n[%d]: ", i);
        printf("%f\n", *n); 
    }
} 

