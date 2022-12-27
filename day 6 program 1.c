#include<stdio.h>

int main()
{
    int a[10][10];
    for(int i=1;i<=3;i++)
    {
        for(int j=1;j<=3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
     printf("This is original matrix \n");
     for(int i=1;i<=3;i++)
    {
        for(int j=1;j<=3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
     printf("This is NEW  matrix \n");
    for(int j=1;j<=3;j++)
    {
        for(int i=3;i>=1;i--)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

}
