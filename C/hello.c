
#include <stdio.h>
#include <stdlib.h>
 int main (void)
 {
    char Name [] = "john";
    int age = 20;
   
    printf("my name is %s \t", Name );
    printf("I am %d \n", age);
    char newnamr []= "don"; 
    age = 21;
    printf("my name is %s \t", newnamr);
    printf(" my age %d \n", age);

    int nwage = 100;
    double gpa = 4.6;
    char mark = 'A';
    char phrase [] = "la fac fuck";
    printf("age = %d\n", nwage);
    printf("gpa = %.2lf\n", gpa);
    printf("mark = %c\n", mark);
    printf("phrase = %s\n", phrase);
    return 0;
 }