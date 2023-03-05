#include <stdio.h>
#include <stdlib.h>

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
   sokhra(); */
   boxer();
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
} */
int boxer()
{
double earth_weight;
double yourweight;
char operation;
double Mercury = 0.38;
double Vanus  = 0.91;
double Mars = 0.38;
double Jupiter = 2.34;
double Saturn = 1.06;
double Uranus = 0.92;
double Neptune = 1.19;
printf ("what is your weight on earth ? \n");
scanf ("%lf", &earth_weight);
printf("please enter number from 1-7 : ");
scanf("%d",&operation);
switch (operation){
  case 1 :
 yourweight = earth_weight * Mercury;
  break;
  case 2 :
yourweight = earth_weight * Vanus;
  break; 
  case 3:
  yourweight = earth_weight * Mars;
  break;
  case 4 :
  yourweight = earth_weight * Jupiter;
  break;
  case 5:
  yourweight = earth_weight * Saturn;
  break;
  case 6 : 
  yourweight = earth_weight * Uranus;
  break;
  case 7 :
  yourweight = earth_weight * Neptune; 
  break;
  default :
  printf (" error");
}
printf ("your weight is : %.2lf \n", yourweight);
 return 0;
}
