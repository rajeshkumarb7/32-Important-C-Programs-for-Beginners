
/*
    Factorial of given number

    ex: num=5 -> 5! => 5*4*3*2*1 =>120
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,fact=1;      // num = input number, rev = factorial value
    printf("Enter the Num : ");
    scanf("%d",&num);    // take number input

    while(num>0){           // loop runs until number becomes 0
        fact*=num;   //fact=fact*num;
        num-=1;     //reduce 1 value decrement n--
    }

    printf("\nFactorial for given number is:%d",fact);

    return 0;
}


