/*reverse a array*/
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int k=n-1;
    for(i=0;i<n/2;i++)
    {
        int t=arr[i];
        arr[i]=arr[k];
        arr[k--]=t;
    }
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
}
