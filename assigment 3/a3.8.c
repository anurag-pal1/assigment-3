//To check given year is leap year or not
#include<stdio.h>
int main()
{
    int year;
    printf("Enter year:");
    scanf("%d",&year);
    if((year%4==0)&&(year%100 !=0) || (year%400==0))
    {
        printf("\nGiven year is a leap year");

    }
    else
    {
        printf("\nGiven year is not a leap year");
    }
    return 0;
}
