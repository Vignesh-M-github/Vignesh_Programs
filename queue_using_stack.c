#include<stdio.h>
#include<string.h>
int main()
{
    int que[10000],stac[10000];
    int i,t=0;
    while(1)
    {
        char ch[10];
        scanf("%s",ch);
        if(strcmp(ch,"push")==0)
        {
            if(t>0)
            {
            for(i=0;i<t;i++)
            {
                stac[i]=que[i];
            }
            }
            scanf("%d",&que[0]);
            t++;
            if(t>1)
            {
            for(i=0;i<t-1;i++)
                que[i+1]=stac[i];
            }
        }
        else if(strcmp(ch,"pop")==0)
        {
            t--;
        }
        else
        {
            for(i=0;i<t;i++)
                printf("%d ",que[i]);
        }
    }
}
