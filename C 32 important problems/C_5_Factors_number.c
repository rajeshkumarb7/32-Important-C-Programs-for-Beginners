
/*
    5.Factors of given number

    ex: 24 -> 1,2,3,4,6,8,12
            (24%2==0) if a number is divide and return reminder is zero that divider is factor of that given number
*/


#include <stdio.h>
#include <stdlib.h>

void factors(int n){
    int i,c=0;
    printf("factor for this number %d are : ",n);
    for(i=1;i<=n/2+1;i++){
        if(n%i==0){
            printf("%d, ",i);
            c++;
        }
    }
    printf("%d ",n);


}

int main()
{
    int num;      // num = input number, rev = factorial value
    printf("Enter the Num : ");
    scanf("%d",&num);    // take number input
    factors(num);

    return 0;
}


