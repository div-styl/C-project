#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// work place
/*int jake(){

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
*/
int bank()
{
double nm1;
double paywithdraw =1;
double youraccount;
double takeout;
double task = 1;
int op;
while (task)
{
  char name [100];
  printf ("please enter your secret name: ");
  scanf (" %c", name);
  printf (" Good everning Mr/Mrs %c to your secret bank \n ", name);
  printf (" How much money you want to put today sir / ma'am: ");
  scanf ("%lf", &nm1 - &paywithdraw);
  printf ("please choose actions you wanna do in your account (withdraw = 1/ accountstatus = 2)"); 

        switch (op)
        {
        case  1 :

            printf (" how much you went to withdraw?: ");
            scanf ("%lf", &takeout);
            youraccount = nm1 - takeout;
            printf ("%.2lf", youraccount );
            break;
        case 2 :
           printf ("your account sum: %lf", nm1);
        default:
            printf ("smthg went wrong press 1 to redo or 0 to exit : ");
            scanf ("%lf", &task);
            break;
        }
}

return 0;

}

int main()
{
 //jake();
 bank();

}