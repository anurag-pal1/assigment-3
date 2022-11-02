/* To check whether a given character is an alphabet (uppercase), an
alphabet (lower case), a digit or a special character.*/
#include<stdio.h>
int main()
{
    char ch;

    printf("Enter a character:");
    scanf("%c",&ch);

    if((ch>=65)&&(ch<=90))
    {
        printf("\nIt is a uppercase alphabet");
    }
    else if((ch>=97)&&(ch<=122))
    {
        printf("\nIt is a lowercase alphabet ");
    }
    else if((ch>=48)&&(ch<=57))
    {
        printf("\nIt is a digit");
    }
    else
    {
        printf("\nIt is a special character");
    }
    return 0;
}
