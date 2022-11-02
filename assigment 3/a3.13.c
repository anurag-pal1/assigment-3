//To check whether number is divisible by 2 and 3
#include<stdio.h>
int  main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    if(x%3==0&&x%2==0)
    {
        printf("Number is divisible by 2 and 3");

    }
    else
    {
        printf("Number is not divisible by 2 and 3");
    }
    return 0;
}
