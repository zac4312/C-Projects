#include <stdio.h> 
#include <math.h>
int main() 
{

    float area;
    float sides = 3;
    
    area = ((sqrtf(3))/4) * (sides * sides);
    printf("area = %f", area);

    return 0;
}
