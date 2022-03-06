#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num,n;
    scanf("%d",&num);
    n=num;
    int m,each[10]={0};
    for(;n!=0;)
    {
        m=n%10;
        each[m]++;
        n/=10;
    }
    n=2*num;
    for(;n!=0;)
    {
        m=n%10;
        each[m]--;
        n/=10;
    }
    for(int i=0;i<10;i++)
    {
        if(each[i]!=0)
        {
            printf("No\n");
            break;
        }
        if(i==9&&each[i]==0)
        {
            printf("Yes\n");
        }
    }
    printf("%d\n",2*num);
    system("pause");
    return 0;
}