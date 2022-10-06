#include<stdio.h>
int main()
{
    int a[100],i;
    for(i=1;i<=100;i++)
    {
        a[i]=i;
    }
    printf(" 1 to 100 EVEN numbers\n");
    for(i=1;i<=100;i++)
    if(a[i]%2==0)
    {
       printf("\n\n %d  is even",a[i]);
     }
    
    printf(" 1 to 100 ODD numbers\n");
    for(i=1;i<=100;i++)
    if(a[i]%2!=0)
     {
          printf("\n\n %d is odd",a[i]);
     }
}
