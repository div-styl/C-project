#include <stdio.h>
#include <stdlib.h>
int main()
{
    // to avoid misleading, the creation of "int " twice made our code sensful.
int firstage = 12;
printf("john has %d \t", firstage);
int secondage = 70;
printf("his father has %d \n", secondage);
// new code 
double num = 10.5;
double num2 = 125;
float num1 = 19.9f;
printf ("JOHN GOT %.2lf \t", num);
printf ("THE FATHER GOT %.2f \n", num1);
printf ("TEST %lf \n",num2);
return 0;
}