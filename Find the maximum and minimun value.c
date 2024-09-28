#include<stdio.h>
int main()
{
    int arr[100],n,i;
    printf("enter the numbers: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int min = arr[0];
    int max = arr[0];
    for( i=1 ; i<n ; i++)
    {
        if (arr[i] < min)
            min = arr[i];
        else if (arr[i] > max)
            max = arr[i];
    }
    printf("min-%d max-%d",min,max );
    return 0;
}