#include<stdio.h>
#include<string.h>
int main()
{
    char arr1[100],arr2[100];
    scanf("%s",arr1);
    scanf("%s",arr2);
    int l1=strlen(arr1);
    int l2=strlen(arr2);
    int alpha1[60]={0},alpha2[60]={0},i;
    if(l1==l2)
    {
        for(i=0;i<l1;i++)
        {
            alpha1[arr1[i]-65]++;
            alpha2[arr2[i]-65]++;
        }
        for(i=0;i<60;i++)
        {
            if(alpha1[i]!=alpha2[i])
            {
                printf("no");
                break;
            }
        }
        if(i==60)
           printf("yes");

    }
    else
     printf("no");
}
