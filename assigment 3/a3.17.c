//To display whether triangle is valid or not
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter sides of triangle\n");
    scanf("%d %d %d",&a,&b,&c);
    if((a+b)>c)
    {
        printf("Triangle is valid");
    }
    else
    {
        printf("Triangle is not valid");
    }
    return 0;
}
