//To check roots of quadratic equation are real & distinct

#include<stdio.h>
int main()
{
    int a,b,c,D;
    printf("Enter value of a:");
    scanf("%d",&a);
    printf("\nEnter value of b:");
    scanf("%d",&b);
    printf("\nEnter values of c:");
    scanf("%d",&c);
    D=b*b-4*a*c;
    printf("\nValue of D is:%d",D);
    if(D>0)
    {
        printf("\nRoots are real and distinct");
    }
    else if(D==0)
    {
        printf("\nRoots are real and equal");
    }
    else
    {
        printf("\nRoots are imaginary");
    }
    return 0;
}
