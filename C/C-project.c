#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void print_result(double nm1, char name [100], double account){
  printf ("Good eveing Mr (%s) \n", name );
  printf ("How much money you would like to put in your bank account sir: ",nm1);
  printf ("your status bank account is %.2lf \n", account);

}
int bank()
{
double nm1;
double paywithdraw =1;
double account = nm1 - paywithdraw ;
double takeout;
double task = 1;
int op;
while (task)
{
  char name[100];
  printf ("enter name: ");
  fgets (name, sizeof(name), stdin);
  print_result (name);
  print_result (nm1);
  scanf ("%.2lf", &nm1);

  printf ("please choose actions you wanna do in your account (withdraw = 1/ accountstatus = 2)"); 

        switch (op)
        {
        case  1 :

            printf (" how much you went to withdraw?: ");
            scanf ("%lf", &takeout);
           account = account - takeout;
            printf ("%.2lf", account );
            break;
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