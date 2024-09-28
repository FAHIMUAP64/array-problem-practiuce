#include<stdio.h>
int main()
{
    int i,zerocount=0,onecount=0;
    int arr[]={0,1,2,0,1,2};

    for(i=0;i<=5;i++)
    {
        if(arr[i]==0)
        zerocount++;
        if(arr[i]==1)
        onecount++;
    }
    for(i=0;i<zerocount;i++)
    {
        arr[i]=0;
    }
    for(i=zerocount;i<(onecount+zerocount);i++)
    {
        arr[i]=1;
    }
    for(i=(onecount+zerocount);i<5;i++)
    {
        arr[i]=2;
    }
    for(i=0;i<=5;i++)
    {
        printf("\nSorted 1s and 2s is:%d ",arr[i]);
    }
    return 0;
}