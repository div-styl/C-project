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
char name [] = "lmao";
double num2 = 125;
float num1 = 19.9f;
printf ("JOHN GOT %.2lf \t", num);
printf ("THE FATHER GOT %.2f \n", num1);
printf ("TEST %lf \t",num2);
printf ("%s \n", name);
// explore size
printf ("double = %zu \n", sizeof(num));
printf ("char = %zu \n", sizeof (name));
printf ("double =%zu \n", sizeof(num2));
printf ("float = %zu \n", sizeof (num1));
int hello();
return 0;
}

int hello()
{
int sum = 0;
int a = 20;
int b = 30;
sum = a + b;
printf("result %d", sum);
return 0;
}
