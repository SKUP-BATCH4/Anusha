#include<stdio.h>
int main()
{
    int a[10],i;
    int even=0,odd=0;
    //printf("enter");
    //for(i=0;i<=5;i++)
    //{

    //}
    for(i=0;i<=5;i++)
    {
        scanf(" %d",&a[i]);
        if(a[i]%2==0)
           even= even+1;

        else
            odd=odd+1;
    }
    printf(" %d\n",even);
    printf("%d",even);
    //return 0;
}
