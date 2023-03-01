#include <stdio.h>

int main()
{
    int a = 1200;
    int b = 5;
    int sum;
    float presntage;
    int d = 20;
    int c = 6;
    int leftover = d % c;
 // calculate the sum of a and b
 sum = a * b;
 // calculate tax
 presntage = sum * 0.2;
 printf ("result no tax %d \n", sum);
 printf ("reult after tax %.2f \n", presntage);

   
    printf("%i", leftover);
 
 return 0;
 
}
