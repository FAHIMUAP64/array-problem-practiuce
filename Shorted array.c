#include<stdio.h>
int main()
{
    int a[5],i,j,temp;
    printf("Enter array: ");
    for(i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=4;i++)
    {
        for(j=i+1;j<=4;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<=4;i++)
    {
        printf("\nShorted array: %d",a[i]);
    }
    return 0;
}