#include<stdio.h>
int main()
{
    int i,j;
    int a[2]={0,1,2};
    for(i=1;i<=2;i++)
    {
        for(j=1;j<=2;j++)
        {
            printf("%d",a[j]);
        }
        printf("%d",a[i]);
    }
    return 0;
}
