/*
    4. Reverse the number

    ex: num=12345 => num=54321
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,rev=0;      // num = input number, rev = reversed number
    printf("Enter the Num : ");
    scanf("%d",&num);    // take number input

    while(num>0){           // loop runs until number becomes 0
        rev=rev*10+num%10;  // take last digit and add to rev
        num/=10; //remove last digit
    }

    printf("\nReversed number is:%d",rev);

    return 0;
}

/*

step by step with num = 12345 and rev = 0:

Step	num	num%10 (last digit)	rev = rev*10 + num%10	num = num/10
1	12345	5	0*10 + 5 = 5	1234
2	1234	4	5*10 + 4 = 54	123
3	123	3	54*10 + 3 = 543	12
4	12	2	543*10 + 2 = 5432	1
5	1	1	5432*10 + 1 = 54321	0

-> When num becomes 0, the loop stops.

Now rev = 54321.

*/
