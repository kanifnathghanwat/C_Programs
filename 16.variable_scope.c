#include<stdio.h>
int main()
{
    int i=5, j=10;
    {
        int i=20, j=25;
        printf("%d %d\n",i,j);
    }
    printf("%d %d",i,j);
}
