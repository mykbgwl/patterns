#include<stdio.h>
int main()
{
    int i,j,n=5;
    for(i=0;i<=n-3;i++)
    {
        for(j=0;j<n-3-i;j++)
        {
            printf(" ");
        }
        int k=i*2+1,a=1,b=k/2;
        for(j=0;j<k;j++)
        {
            if(j<=k/2)
            {
                printf("%d",a);
                a++;
            }
            else
            {
                printf("%d",b);
                b--;
            }
        }
        printf("\n");
    }
    for(i=0;i<n-3;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf(" ");
        }
        int k=n*2-2*(i+3)-1,a=1,b=k/2;
        for(j=0;j<k;j++)
        {
            if(j<=k/2)
            {
                printf("%d",a);
                a++;
            }
            else
            {
                printf("%d",b);
                b--;
            }
        }
        printf("\n");
    }
    return 0;
}