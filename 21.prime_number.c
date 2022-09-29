#include<stdio.h>
int main()
{
    int i=2,no,k=0;
    printf("Enter a no: ");
    scanf("%d",&no);
    while(i<=no/2)
    {
        if(no%i==0)
        {
            k++;
        }
        i++;
    }
    if(k==0)
    {
        printf("%d is Prime number...", no);
    }
    else
     {
        printf("%d is not Prime number...", no);
     }
}
