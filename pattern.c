#include<stdio.h>
int main()
{
    int i=1,j=3;
    do
    {
        //printf("hello");
        do
        {
            printf("%d",--j);

        }
        while(j>0);
            i++;
        printf("%d",i);
    }
        while(i<4);


    //return 0;
}
