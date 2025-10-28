/*
    2. Find whether given year Leap year or not
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year;
    printf("Enter the year : ");
    scanf("%d",&year);

    if(year%4==0){
        if(year%100==0){
            if(year%400==0){
                    printf("The Given year %d is Leap Year",year);
            }
            else{
                    printf("The Given year %d is not leap Year",year);
            }
            }
        else{
            printf("The Given year %d is Leap Year",year);
        }

    }
    else{
        printf("The Given year %d is not leap Year",year);
    }

    return 0;
}

/*
    Program to check whether a given year is a Leap Year or not.  ✅

    Rules for Leap Year:
    1. A year is a leap year if it is divisible by 4.
    2. But if it is divisible by 100, it is not a leap year.
    3. However, if it is also divisible by 400, then it is a leap year.

    Example:
    2000 → Leap Year (divisible by 400)
    1900 → Not Leap Year (divisible by 100 but not 400)
    2024 → Leap Year (divisible by 4 but not 100)
*/
