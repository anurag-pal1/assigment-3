//To check given number is three digit number or not
#include<stdio.h>
#include<math.h>
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    if(x>99&&x<1000)
    {
        printf("Number is a three digit number");
    }
    else
    {
        printf("Number is not a three digit number");
    }


    return 0;
}
