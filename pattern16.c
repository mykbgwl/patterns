#include<stdio.h>
int main()
{
    int i,j,n=5;
    for(i=1;i<n-1;i++)
    {
        for(j=0;j<n-i;j++)
        {
            printf(" ");
        }
        for(j=0;j<i;j++)
        {
            printf("%d",j+1);
        }
        for(j=i-1;j>=1;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    /*for(i=1;i<n-2;i++)
    {
        for(j=0;j<i+1;j++)
        {
            printf(" ");
        }    
    }
    */
    return 0;
}