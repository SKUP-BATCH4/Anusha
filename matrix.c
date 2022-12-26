#include<stdio.h>
int main()
{
    int a[3][3],i,j,sc,sr;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[j][i]);
        }
            printf("\n");
    }
    for(i=0;i<3;i++)
    {
        sr=sc=0;
        for(j=0;j<3;j++)
        {
            sr=sr+a[i][j];
            sc=sc+a[j][i];
        }
            printf("%d\n",sr);
            printf("%d\n",sc);

    }


}
