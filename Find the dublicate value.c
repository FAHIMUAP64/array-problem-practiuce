#include<stdio.h>
int main()
{
    int i,j,n,arr[20],temp=0;
    printf("Enter the size of array: ");
    scanf("%d",&n);

    for(i=0;i<=n;i++)
    {
        printf("\nEnter the value of array %d: ",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(arr[i]==arr[j])
            {
                temp=1;
                printf("\nDublicate number found in positiohn at %d and %d ",i,j);
            }
        }
    }
    if(temp==0)
    {
        printf("\nDublicate number not found in the Array");
    }
    return 0;
}