#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void printv(double account){
 
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
  //get name
  char name [100];
   printf("what is your name please? ");
   scanf ("%s",name);
   printf("hey Mr. %s\n",name );

  // odds
  printf ("choose your operation (put= 1 withdraw = 2/ accountstatus = 3): "); 
  scanf("%d",&op);
        switch (op)
        {
        case 1:
          printf ("how much y wanna put: ");
          scanf ("%lf",&nm1);
          account = nm1 - paywithdraw;
          printf ("you balance %.2lf", account);
          break;
        case  2 :

            printf (" how much you went to withdraw?: ");
            scanf ("%.2lf", &takeout);
           account = account - takeout;
            printf ("%.2lf", account );
            break;
        case 3 :
            printv(account);
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
 bank();

}