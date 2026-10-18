/*
    This program takes in a measurement in Cups and prints 
    the equivalent in ounces, pints, quarts, gallons and liters
*/

#include "stdio.h"

float cup2ounce(float cup) { return cup*8; }

float ounce2quart(float ounce) { return ounce/32; }

float pint2gallon(float pint) { return pint*0.125; }

float quart2pint(float quart) { return quart*2; }

float pint2liter(float pint) { return pint/2.1 ;}

//Test Script
void test_cup2ounce() { printf( "3 cups: %.4f \n 2.5 cups: %.4f \n 0 cups: %.4f \n", cup2ounce(3), cup2ounce(2.5), cup2ounce(0)); }

void test_ounce2quart() { printf("1 ounce: %.4f \n 1.6 ounces: %.4f \n 0 ounces %.4f \n", ounce2quart(1), ounce2quart(1.6), ounce2quart(0) ); }

void test_pint2gallon() { printf("5 pints: %.4f \n 4.2 pints: %.4f \n 0 pints %.4f \n", pint2gallon(5), pint2gallon(4.2), pint2gallon(0) ); }

void test_quart2pint() { printf("7 quart: %.4f \n 3.6 quarts: %.4f \n 0 quarts %.4f \n", quart2pint(7), quart2pint(3.6), quart2pint(0) ); }

void test_pint2litter() { printf("15 pints: %.4f \n 7.9 pints: %.4f \n 0 pints %.4f \n", pint2liter(15), pint2liter(7.9), pint2liter(0) ); }


int main() 
{
    float cup, ounce, quart, gallon, pint, liter;

    printf("Unit Convertion\n");
    
    printf("Enter a Measurement in Cups\n");
    printf("Cups: "); scanf("%f", &cup);
    printf("\n");

    ounce = cup2ounce(cup); 
    quart = ounce2quart(ounce);
    pint = quart2pint(quart);
    gallon = pint2gallon(pint);
    liter = pint2liter(pint);
    
    printf("%.4f Cups is equal to:\n", cup);
    printf("%.4f Ounces\n", ounce);
    printf("%.4f Quart\n", quart);
    printf("%.4f Pint\n", pint);
    printf("%.4f Gallon\n", gallon);
    printf("%.4f Liter\n", liter);
    
    printf("\n");

    printf("Test Values: \n");

        printf("cup2ounce()\n");
        test_cup2ounce();

        printf("ounce2quart()\n");
        test_ounce2quart();
        
        printf("pint2gallon()\n");
        test_pint2gallon();

        printf("pint2litter()\n");
        test_pint2litter();

        printf("quart2pint()\n");
        test_quart2pint();

    return 0;
}
