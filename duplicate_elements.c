#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int arr[n],duplicate[1000000]={0};
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        if(duplicate[arr[i]]==-1)
            continue;
        duplicate[arr[i]]++;
        if(duplicate[arr[i]]>1)
        {
           printf("%d\n",arr[i]);
           duplicate[arr[i]]=-1;
        }
    }
}
