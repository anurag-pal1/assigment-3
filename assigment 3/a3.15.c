//To check given number is positive,negative or zero
#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    if(x>0)
    {
        printf("Number is positive");
    }
    else if(x<0)
    {
        printf("Number is negative");
    }
    else
    {
        printf("Number is zero");
    }
    return 0;
}
