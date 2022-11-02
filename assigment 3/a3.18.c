//To display the days in a month
#include<stdio.h>
int main()
{
    int M;
    printf("Enter month number:");
    scanf("%d",&M);
    if(M==1||M==3||M==5||M==7||M==8||M==10||M==12)
    {
        printf("This month has 31 days");
    }
    else if(M==4||M==6||M==9||M==11)
    {
        printf("This month has 30 days");
    }
    else if(M==2)
    {
        printf("This month has 28 days");
    }
    else
    {
        printf("Month is not valid");
    }
    return 0;
}
