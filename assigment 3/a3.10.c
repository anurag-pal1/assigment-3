//To calculate profit and loss percentage
#include<stdio.h>
int main()
{
    int SP,CP,profit,loss,lossperc,profitperc;
    printf("Enter the Cost Price of product:");
    scanf("%d",&CP);
    printf("\nEnter the Selling Price of product:");
    scanf("%d",&SP);
    if(SP>CP)
    {
        profit=SP-CP;
        profitperc=profit*100/CP;
        printf("\nProfit of product is %d ",profit);
        printf("\nProfit percentage of product is %d ",profitperc);
    }
    else if(CP>SP)
    {
        loss=CP-SP;
        lossperc=loss*100/CP;
        printf("\nLoss of product is %d",loss);
        printf("\nLoss percentage of product is %d",lossperc);

    }
    else
    {
        printf("There is no loss or gain" );
    }
    return 0;
}
