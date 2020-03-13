/*selecting k items in an array*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int arr[1000]={0},n=0,brr[1000],i=0,k,j;
    char chr;
    for(i=0;i<1000;i++)
    {
        scanf("%d",&arr[i]);
        scanf("%c",&chr);
        n++;
        if(chr=='\n')
            break;
    }
    scanf("%d",&k);
    for(i=0;i<k;i++)
        brr[i]=arr[i];
    srand(time(NULL));
    for(i=0;i<n;i++)
    {
        j=rand()%(i+1);
        if(j<k)
          brr[j]=arr[i];
    }
    for(i=0;i<k;i++)
        printf("%d ",brr[i]);
}
