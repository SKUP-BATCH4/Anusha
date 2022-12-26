#include<stdio.h>
int main()
{
    int a[10],i;
    int odd=0,even=0;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        if(a[i]%2==0)
            even=even+1;
        else
            odd=odd+1;
    }
    printf("%d\n",even);
    printf("%d",odd);
}
