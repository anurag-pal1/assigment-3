//To check whether the given alphabet is uppercase or lowercase
#include<stdio.h>
int main()
{
    char alphabet;
    printf("Enter any alphabet either lowercase or uppercase:\n");
    scanf("%c",&alphabet);
    if((alphabet>=65)&&(alphabet<=90))
    {
        printf("Alphabet is in Uppercase ");
    }
    else if((alphabet>=97)&&(alphabet<=122))
    {
        printf("Alphabet is in Lowecase");
    }
    else
    {
        printf("Not Valid");
    }
    return 0;
}
