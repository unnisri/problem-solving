#include<stdio.h>
int main()
{
    int arr[100],num,n,i;
    printf("enter the numbers of elements");
    scanf("%d",&n);

    num=1;
    for(i=0;i<n;i++)
    {
           printf("enter the a[%d]\n",i);
           scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]==num)
        {
            printf("% is found at position %d\n",num,i);
            break;
        }
        else
        {
            printf("% is not found");
        }
    }
    return 0;


}
