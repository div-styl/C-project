#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//-------------------------operation--------------------------------------
void operation(int *op){
	printf ("--------welcome to the operation----------- \n");
    printf("Please choose your operation:  \n");
    printf("1 - deposit \n");
    printf ("2 - see your accountbalance\n");
    printf("3 - withdraw\n");
    printf("4 - transfer\n");
    printf ("enter the number of operation: ");
    scanf("%d", op);
}

//--------------------------- usernames -------------------------------------
void accountuser(char *user1, char *user2){
	printf ("-----------------welcome to your a7anou---------------------\n");
    printf("please enter the first account: ");
    scanf("%s", user1);
    printf ("Good job, now eneter the second one: ");
    scanf ("%s", user2);
}

// depositing
double depositing(double *account1, double *account2, char *user1, char *user2){
    double amount;
    char accountuser[100];
    printf("Choose account: ");
    scanf("%s", accountuser);
    printf("How much would you like to deposit: ");
    scanf("%lf", &amount);
    if (strcmp(accountuser, user1) == 0){
        *account1 += amount;
        printf("Allahuma Barik!\n");
    } else if (strcmp(accountuser, user2) == 0){
        *account2 += amount;
        printf("arabra3!\n");
    } else {
        printf("pfff ach hd lkhra.\n");
    }
    return amount;
}

//------------------------------- account status-----------------------------------
double accountbalance(double *account1, double *account2, char *user1, char *user2){
    char accountuser[100];
    printf("Choose account you want to show: ");
    scanf("%s", accountuser);
    if (strcmp(accountuser, user1) == 0){
        printf("You have %lf\n", *account1);
        return *account1;
    } else if (strcmp(accountuser, user2) == 0){
        printf("You have %lf\n", *account2);
        return *account2;
    } else {
        printf("fin ghadi finwa ghadi.\n");
        return 0;
    }
}
// ------------------------------withdraw-------------------------------------
double withdraw(double *account1, double *account2, char *user1, char *user2){
    char accountuser[100];
    printf ("achmn account bghit tkhrj mno lflous albogoss: ");
    scanf ("%s",accountuser);
    double amount;
    printf("How much would you like to withdraw: ");
    scanf("%lf", &amount);
    if (amount <= *account1){
        *account1 -= amount;
        printf("bshtk!\n");
        return amount;
    } else if (amount <= *account2){
        *account2 -= amount;
        printf("zahya alm3lm!\n");
        return amount;
    } else {
        printf("m7zu9a l9dya.\n");
        return 0;
    }
}
// -------------------------------transfer-------------------------------------
double transfer(char *user1, char *user2, double *account1, double *account2){
	char accountuser[100];
    printf ("lmn bghity tsft flous: ");
    scanf ("%s",accountuser);
    double amount;
    printf("How much would you like to transfer: ");
    scanf ("%lf", &amount);
    if (strcmp (accountuser, user1)==0){
        *account2 -= amount;
        *account1 += amount;
        printf("Allahuma 9dirna ela fi3l lkhair!\n");
        return amount;
    } else if (strcmp (accountuser, user2)==0){
        *account1 -= amount;
        *account2 += amount;
        printf(" allah!\n");
        return amount;
    } else {
        printf("Transaction failed.\n");
        return 0;
    }
}
// ----------------------------pre-calling-----------------------------------
int bank(){
    int task = 1, op;
    char user1[100], user2[100];
    double account1 = 0, account2 = 0;
    accountuser(user1, user2);
    printf("Welcome %s and %s.\n", user1, user2);	
    while (task){
        operation(&op);
        switch (op){
            case 1:
                depositing(&account1, &account2, user1, user2);

                break;
            case 2:
                accountbalance(&account1, &account2, user1, user2);
                break;
            case 3:
                withdraw(&account1, &account2, user1, user2);
                break;
            case 4:
                transfer(user1, user2, &account1, &account2);
                break;
            default :
                printf ("smthg worng ");
                scanf ("%d", &task);
                break;
        }
	}
return 0;
}
//---------------------------post-calling-------------------------------------
int main()
{
	bank ();
}