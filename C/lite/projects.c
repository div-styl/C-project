#include <stdio.h>

int main()
{
 
// implicite declaration of function 
  
    calculation();
    modulo();
    shortcut();
    icreaing();
    money();
    salam();
    return 0;

 
}

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


int money ()

{
    int con = 2;
    int di = 4;

        if (con != di){
        con++;
        printf ("here is it %d \n", con);
    return 0;
    }
}

int salam()
{
    int h= 1;
    int j = 2;
     sum = j + h;
    printf("run %i \n", sum);
    return 0;
}