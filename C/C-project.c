#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void print_result(double nm1, char name [100], double account){
  printf ("Good eveing Mr (%s) \n", name );
  printf ("your status bank account is %.2lf \n", account);

}
int bank()
{
double nm1;
double paywithdraw =1;
double account;
double takeout;
double task = 1;
int op; 
while (task)
{
  char name[100];
  //clean
  printf ("enter name: ");
  scanf ("%S",&name);
  print_result (name);
  // odd
  printf ("please choose actions you wanna do in your account (put= 1 withdraw = 2/ accountstatus = 3)"); 
  scanf("%s",&op);
        switch (op)
        {
        case 1:
          printf ("how much y wanna put: ");
          scanf ("%.2lf",&nm1);
          printf ("you balance %.2lf", account-1);
          break;
        case  2 :

            printf (" how much you went to withdraw?: ");
            scanf ("%lf", &takeout);
           account = account - takeout;
            printf ("%.2lf", account );
            break;
        case 3 :
            printf("%.2lf\n", account );
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