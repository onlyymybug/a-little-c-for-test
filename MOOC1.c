//打印沙漏
//input  19 *
//output
//*****
// ***
//  *
// ***
//*****
//2
//(此处2是剩余的符号个数)
#include<stdlib.h>
#include<stdio.h>
int main()
{
    int num,line;
    char c;
    scanf("%d %c",&num,&c);
    for(line=1;2*line*line-1<=num;line++);
    line--;
    for(int i=1;i<=line;i++)//前line行（倒三角）
    {
        for(int j=1;j<i;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=2*(line-i+1)-1;j++)
        {
            printf("%c",c);
        }
        printf("\n");
    }
    for(int i=1;i<line;i++)
    {
        for(int j=1;j<line-i;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=2*i+1;j++)
        {
            printf("%c",c);
        }
        printf("\n");
    }
    printf("%d\n",num-(2*line*line-1));
    system("pause");
    return 0;
}