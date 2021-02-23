#include<stdio.h>
int main()
{
    int i,j,n=5;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            printf(" ");
        }
        for(j=0;j<i*2+1;j++)
        {
            printf("%d",j+1);
        }
        printf("\n");
    }
    return 0;
}