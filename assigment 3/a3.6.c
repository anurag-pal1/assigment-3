//To print greater between two numbers
#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter first number:");
    scanf("%d",&x);
    printf("\nEnter second number: ");
    scanf("%d",&y);
    if(x>y)
    {
        printf("\nGreater number is %d ",x);
    }
    else if(y>x)
    {
        printf("\nGreater number is %d ",y);
    }
    else
    {
        printf("\nNumbers are equal %d",x);
    }
    return 0;

}
