#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{     
    int n = 42, p = 0; // Initialization
    char ch = 'A';
    const  double PI = 3.141592653589793;
    double d = 0.0;    

    // expressions are evaluated
    // things in parenthesis first 
    // mul & div before add & sub\
    // evaluate left to right

    p = (n + 1) * 4;
    printf("p=%d\n", p);

    d = 2 * PI;
    printf("d=%.4lf\n", d);

    //   mixed mode arithmetic 
    d = 2 / 3 * PI; //It does not accept fractions, so 0 * PI.
    printf("d=%.4lf\n", d);
 
    //  casting
    d = 2 / (double) 3 * PI;
    printf("(cast)d=%.4lf\n", d);
      
    // modulus - remainder after division
    p = n % 5;
    printf("%d %% 5 = %d\n", n, p);

    n++;    
    p = n % 2;
    printf("%d %% 2 = %d\n", n, p);
  
 /*
2 % 2 = 0
3 % 2 = 1
4 % 2 = 0
5 % 2 = 1
6 % 2 =0 
-----------------
5 % 3 = 2
6 % 3 = 0
7 % 3 = 1
8 % 3 = 2
-----------------
n % m gives a number from 0 - ( m- 1)c
*/








        



    return 0;
}