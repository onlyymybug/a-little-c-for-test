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
    p-=1;//���ƶ���
    q+=m+n-1;//�ƶ����λ��
    for(;p!=begin;)//ȫ����m
    {
        *q=*p;
        p--;
        q--;
    }
    *q=*p;//��ʱpָ���һ����qָ���m+1��
    p+=n;//pָ��n+1��
    q-=m;//qָ���һ��
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