#include<stdio.h>
int main()
{
    int i,j,n=5;
    for(i=0;i<n-2;i++)
    {
        for(j=0;j<n-3-i;j++)
        {
            printf(" ");
        }
        for(j=0;j<i*2+1;j++)
        {
            printf("%d",j+1);
        }
        printf("\n");
    }
    for(i=0;i<n-3;i++)
    {
        for(j=0;j<i+1;j++)
        {
            printf(" ");
        }
        for(j=0;j<2*n-2*(i+3)-1;j++)
        {
            printf("%d",j+1);
        }
        printf("\n");
    }
    return 0;
}