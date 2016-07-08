#include<stdio.h>
#include<conio.h>
void main()
int factorial(int num1) 
    {
        if(num1 > 1)
        {
           return num1* factorial(num1-1) ; 
        }
        else
        {
          return 1 ; 
        }
    }

    int is_factorial(int num2) 
    {
        int fact = 0  ; 
        int i = 0  ;
        while(fact < num2)
        {
             fact = factorial(i) ; 
             i++ ;
        }
        if(fact == num2)
        {
             return 0  ;
        }
        else
        {
             return -1;
        }
    }
