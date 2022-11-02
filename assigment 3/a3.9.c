//To check greatest among three numbers
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b&&a>c)
    {
        printf("\nGreatest number is %d",a);
    }
    else if(b>a&&b>c)
    {
        printf("\nGreatest number is %d",b);

    }
    else if(c>a&&c>b)
    {
        printf("\nGreatest number is %d",c);
    }
    else
    {
        printf("\nNumbers are equal.Number is %d",a);
    }
    return 0;
}
