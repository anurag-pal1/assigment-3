//To check whether number is divisible by 7 and 3
#include<stdio.h>
int  main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    if(x%3==0||x%7==0)
    {
        printf("Number is divisible by 7 or 3");

    }
    else
    {
        printf("Number is not divisible by 7 or 3");
    }
    return 0;
}
