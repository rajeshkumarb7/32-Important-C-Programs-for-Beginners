
/*
    7. strong number check :
        the given number is strong number or not :
                the given is equal to sum of factorial of that given number is indivial  is equal then given number is strong number.
                the given number is separed as indiviual number and find all numbers factors sum is equal to given number then that number is storng number.

                ex1: 145-> 1! +4! +5! -> 1+24+120 -> 145 so strong number
*/

#include <stdio.h>
#include<math.h>
int fact(int n){
    if(n<=1)
        return 1;
    return n*fact(n-1);
}
void strong(int num){
    int sum=0;
    int temp=num;
    while(temp>0){
        sum+=fact(temp%10);
        temp/=10;
    }
    if(sum==num){
        printf("The given number %d : is Strong Number",num);
    }
    else{
        printf("The given number %d : is Not Strong Number",num);
    }
}


int main()
{
    int num;      // num = input number, rev = factorial value
    printf("Enter the Num : ");
    scanf("%d",&num);    // take number input
    strong(num);
    return 0;
}


