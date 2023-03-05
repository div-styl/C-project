#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
 
// implicite declaration of function 
/*
    calculation();
    modulo();
    shortcut();
    icreaing();
    plus();
    logic1();
    newelse();
    hello ();
    
   smthg();
   sokhra(); 
   boxer();
   */
   jake();
   bank();
    return 0;
}
/*
int icreaing ()
{
   int increas = 1200;
   int decrease = 30;
   increas++;
   decrease--;
   printf("icrease %d \n",increas);
   printf("decrease %d \n",decrease);
   return 0;

}
int shortcut ()
{
    int shortcut = 13;
    shortcut += 2; 

    printf("shortcut result, %i \n",shortcut);
    return 0;
}
int modulo()
{
    int d = 20;
    int c = 6;
    int leftover = d % c;
    printf("what left over = %i \n", leftover);
    return 0;

}
int calculation ()
{
    int a = 1200;
    int b = 5;
    int sum;
    float presntage;
    sum = a * b;
    presntage = sum * 0.2;
    printf ("result no tax %d \n", sum);
    printf ("reult after tax %.2f \n", presntage);
 return 0;

}
int plus ()

{
    int con = 2;
    int di = 4;

        if (con != di){
        con++;
        printf ("here is it %d \n", con);
    return 0;
    }
}
int logic1() 
{
   
    int h1 = 20;
    int h2 = -2;
    char s [] = "positive too\n";
    char s1 []= "positive";

    if (h1 > 0 && h2 > 0){
        printf("%s", &s1);
    }
    if (h1 > 0 && !(h2 > 0)){
        printf("%s", &s);
    }
    return 0;
}
int newelse() {
int article = 1200;

if (article > 2000 ){
    printf ("article passed \n");
}else{
    printf("failed \n ");
}
}
int hello (){

    // data
    int ph = 8;

    // if 
if (ph > 20 ){
    printf (" BASIC\n");
} else if ( ph > 9  ){
    printf (" ACID \n");
} else if (ph > 1 ){
    printf("BASC \n");
} else {
    printf ("ACIDE");
}
return 0;

}
int smthg(){
    int a = 10;
    int b = 20;

    a > b ? printf (" yeah you can do it \n") : printf (" nah you can't \n");
    return 0;
}
int sokhra(){
    double total = 10;
    double garo = 2.5;
    double bimo = 2 * 3;
    double sum; 
  sum = (garo + bimo ) - total;
  printf (" li b9a lik %.2lf \n ", sum);
  printf (" bimo dyr %.2lf \n", bimo);
  return 0;
} 
*/
// switch + loop

int jake(){

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
