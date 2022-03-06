#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    if(m>n)
    m%=n;
    int*p=(int*)malloc(sizeof(int)*2*n);
    int*q=p,*begin=p;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",p);
        p++;
    }
    p-=1;//被移动的
    q+=m+n-1;//移动后的位置
    for(;p!=begin;)//全后移m
    {
        *q=*p;
        p--;
        q--;
    }
    *q=*p;//此时p指向第一个，q指向第m+1个
    p+=n;//p指向n+1个
    q-=m;//q指向第一个
    for(int i=1;i<=m;i++)
    {
        *q=*p;
        p++;
        q++;
    }
    p=begin;
    for(int i=1;i<n;i++)
    {
        printf("%d ",*p);
        p++;
    }
    printf("%d\n",*p);
    free(p);
    system("pause");
    return 0;
}