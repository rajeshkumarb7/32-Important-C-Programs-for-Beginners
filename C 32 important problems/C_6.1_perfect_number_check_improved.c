
/*

    6.1 perfect number check improved:
        the given number is perfect or not :
            for perfect number given number is ignored in factor finding
                the given is equal to sum of factor of that given number is equal then given number is perfect number.
            ex1 : 24 -> factors are 1,2,3,4,6,8,12 sum is 36 so and given number is 24 so its not perfect number
            ex2 : 6-> faactors are 1,2,3 sum is 6 and given number is 6 so perfect number
*/


#include <stdio.h>
#include<math.h>

void perfect(int n){
    int i,sum=1;
    printf("The Given number %d is : ",n);
    for(i=2;i<=sqrt(n);i++){
        if(n%i==0){
            if(i*i!=n){
                sum=sum+i+n/i;
            }
            else{
            sum+=i;
            }
        }
    }
    if(sum==n){
        printf("Perfect Number ");
    }
    else{
        printf("Not a Perfect Number");
    }



}

int main()
{
    int num;      // num = input number, rev = factorial value
    printf("Enter the Num : ");
    scanf("%d",&num);    // take number input
    perfect(num);

    return 0;
}


