#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// caluclate 

int calculator {
 double num1, num2, sum;
char op;
int task = 1;
while (task)
{
    char name [1000];
printf ("What's your name: ");
gets(name);
printf ("Hello Mr(s) :");
puts (name);
    printf (" please enter 1st number : \n ");
    scanf ("%lf", & num1);
    
    printf ("please enter the operation (+,-,/,*) : \n");
    scanf (" %c", &op);
    printf (" put the 2nd num :  \n");
    scanf ("%lf", &num2);
    switch (op){
    case '+' :
    sum = num1 + num2 ;
    break; 
    case '-' :
    sum = num1 - num2;
    break;
    case '/' :
      if (num2 == 0) {
        printf ("nah it is not going to happen by 0 try another number \n");
      }else {
         sum = num1 / num2;
      }
    break;
    case '*' :
    sum = num1 * num2;
    break;
    default :
    printf ("tfu ach hdshi abndm  \n");
    break; 
}
printf ("the result is : %.lf \n", sum);
printf ( "enter 1 to redo or  0 to exit : ");
scanf ("%d", & task);
}
return 0;
}

int main (){
	calculator();

}