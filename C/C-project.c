#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void printv(double account, char name [200][200]){
 
  printf ("your status bank account is %lf \n", account);
  printf ("what is your name please:  ");
  scanf ("%s", name);
  printf ("Good morrning MR.%s \n",name);
}
int bank()
{
double nm1;
double paywithdraw =1;
double account;
double takeout;
double task = 1; 
char name [200][200];
int op; 
while (task)
{
  //get name
   printv(account, name);
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
            scanf ("%lf", &takeout);
           account = account - takeout;
            printf ("%lf", &account );
            break;
        case 3 :
            printv(account, name);
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