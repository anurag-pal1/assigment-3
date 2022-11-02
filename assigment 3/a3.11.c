//To check candidate pass the examination or failed
#include<stdio.h>
int main()
{
    int E,H,M,S,C,T,percentage;
    printf("Enter the marks obtained in English:");
    scanf("%d",&E);
    printf("\nEnter the marks obtained in Hindi: ");
    scanf("%d",&H);
    printf("\nEnter the marks obtained in Maths:");
    scanf("%d",&M);
    printf("\nEnter the marks obtained in Science:");
    scanf("%d",&S);
    printf("\nEnter the marks obtained in Computer:");
    scanf("%d",&C);
    T=E+H+M+S+C;
    percentage=T*100/500;
    if(percentage>=33)
    {
        printf("\nCandidate passed the examination with percentage %d",percentage);

    }
    else
    {
        printf("\nCandidate failed the examination with percentage %d",percentage);
    }
    return 0;

}
