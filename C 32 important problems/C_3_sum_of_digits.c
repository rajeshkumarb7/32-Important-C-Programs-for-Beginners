/*
    3. Sum of digits

    ex: num=2043 => sum=2+0+4+3=> sum=9
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,sum=0;
    printf("Enter the Num : ");
    scanf("%d",&num);
    printf("The Given Number %d ",num);

    while(num>0){ // loop stop at num=0
        sum=sum+num%10; // starting  sum=0 num%10 is last digit
        //sum+=num%10;
        num/=10; //remove last digit
        //num=num/10;
    }

    printf("sum of digits is:%d",sum);

    return 0;
}
