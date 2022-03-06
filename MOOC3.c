#include<stdlib.h>
#include<stdio.h>
#define MAX 1000
int main()
{
    int num[MAX],n,m;
    scanf("%d %d",&n,&m);
    for(;;)
    {
        if(m>n)
        m-=n;
        else
        break;
    }
    for(int i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    for(int i=n-1;i>=0;i--)
    {
        num[i+m]=num[i];
    }
    for(int i=0;i<m;i++)
    {
        num[i]=num[i+n];
    }
    for(int i=0;i<n-1;i++)
    {
        printf("%d ",num[i]);
    }
    printf("%d\n",num[n-1]);
    system("pause");
    return 0;
}