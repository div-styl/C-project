#include <stdio.h>

int main()
{
    int a = 1200;
    int b = 5;
    int sum;
    float presntage;
    int d = 20;
    int c = 6;
// modulo calculation
    int leftover = d % c;
// increasing
   int increas = 1200;
   int decrease = 30;
   increas++;
   decrease--;
// calculate the sum of a and b
 sum = a * b;
// calculate tax
 presntage = sum * 0.2;
 printf ("result no tax %d \n", sum);
 printf ("reult after tax %.2f \n", presntage);
//modulo printing
 printf("%i \n", leftover);
// print increasing 
 printf("icrease %d \n",increas);
 printf("decrease %d",decrease);
 
 return 0;
 
}
