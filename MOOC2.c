#include<stdio.h>
#include<stdlib.h>
#define MAX 10000
int is_prim(int n)
{
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }   
    }
    return 1;
}
int main()
{
    int all_prim[MAX]={0},N,s=0,num=0;
    scanf("%d",&N);
    for(int i=1;i<=N;i++)
    {
        if(is_prim(i)==1)
        {
            all_prim[s]=i;
            s++;
        }
    }
    for(int i=1;all_prim[i]!=0;i++)
    {
        if(all_prim[i]-all_prim[i-1]==2)
        num++;
    }
    printf("%d\n",num);
    system("pause");
    return 0;
}