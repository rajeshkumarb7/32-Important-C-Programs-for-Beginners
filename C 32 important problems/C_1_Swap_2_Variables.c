/*
Swap 2 variable using with using 3 variable
t=a; a=b ;b=t;
*/

/*
Swap 2 variable using without using 3 variable
*/

#include<stdio.h>;
int main(){
    int a=10,b=5;

    //METHOD 1
    printf("Method:1\n");
    printf("Before Swapping a is %d and b is %d.\n",a,b);
    a=a+b; //a=15
    b=a-b; //b=10
    a=a-b; //a=5

    printf("Aftter Swapping a is %d and b is %d.\n",a,b);

    //METHOD 2
    printf("Method:2\n");
    printf("Before Swapping a is %d and b is %d.\n",a,b);
    a=a*b;
    b=a/b; //if a=0 zero divition is error be aware
    a=a/b;
    printf("Aftter Swapping a is %d and b is %d.\n",a,b);

    //METHOD 3
    printf("Method:3\n");
    printf("Before Swapping a is %d and b is %d.\n",a,b);
    a=a^b; //refer bitwise operators
    b=a^b;
    a=a^b;
    printf("Aftter Swapping a is %d and b is %d.\n",a,b);



return 0;
}
