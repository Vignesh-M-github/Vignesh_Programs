/*max element in a stack*/
#include<string.h>
#include<stdio.h>
int main()
{
    int arr[100],max[100],t=0,a,m=0;
    while(a=1)
    {
        int d;
        char ch[10];
        scanf("%s",ch);
        if(strcmp(ch,"push")==0)
        {
            scanf("%d",&d);
            arr[t]=d;
            if(m>d)
              max[t++]=m;
            else
              max[t++]=d,m=d;
        }
        else if(strcmp(ch,"pop")==0)
        {
            t--;
            m=max[t];
        }
        else
           printf("\n%d\n\n",m);
    }
}
