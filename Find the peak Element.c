#include<stdio.h>
int main()
{
    int a[]={5,10,15,20,8,2};
    int n=6;
    int low=0,high=n-1;

    while( low <= high )
    {
        int mid=low+(high-low)/2;
        if(( mid == n-1 || a[mid] > a[mid+1] ) && ( mid==0 || a[mid] > a[mid-1] ))
        {
            printf("Peak Element:%d",a[mid]);
            break;
        }
        else if(a[mid]<a[mid+1])
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    return 0;
}