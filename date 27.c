#include<stdio.h>
int main()
{
    int i,j,n,h,l,m,A[100][100];
    printf("enter the value");
    scanf("%d",&n);
    m=n;
    l=0;
    h=(2*n-1);
    while(n>0){
    for(i=l;i<h;i++)
    {
        for(j=l;j<h;j++)
        {
            if(i==l||i==h-1||j==l||j==h-1)
            {
                A[i][j]=n;
            }

        }
    }

    l++;
    h--;
    n--;
    }

    l=0;
    h=(2*m-1);

    for(i=l;i<h;i++)
    {
        for(j=l;j<h;j++)
        {
            printf("%d",A[i][j]);
        }
        printf("\n");
    }

    getch();
}
