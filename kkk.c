#include<stdio.h>
int main()
{
    int  marks[10],i;
    int sum=0;
    float avg;
   // printf("enter");
    for(i=0;i<10;i++)
    {
    scanf("%d",&marks[i]);
    }
    for(i=0;i<10;i++)
    {
        sum=sum+marks[i];
    }
        avg=sum/10;
        printf("%d\n",sum);
        printf("%f",avg);

    return 0;
}


