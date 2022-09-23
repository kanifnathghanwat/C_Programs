#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=10;i++)
    {
        for(j=1;j<=10;j++)
        {
            printf("%4d",i*j);
        }
        printf("\n");
    }
    printf("\n");
    
    for(i=11;i<=20;i++)
    {
        for(j=1;j<=10;j++)
        {
            printf("%4d",i*j);
        }
        printf("\n");
    }
    printf("\n");
    
    for(i=21;i<=30;i++)
    {
        for(j=1;j<=10;j++)
        {
            printf("%4d",i*j);
        }
        printf("\n");
    }
}
