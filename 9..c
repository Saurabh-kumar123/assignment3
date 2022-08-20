#include<stdio.h>
int main()
{
    int a,b,c,max;
    printf("enter a three number\n");
    scanf("%d%d%d",&a,&b,&c);
    max=a>b?a>c?a:c:b>c?b:c;
    printf("%d  is greater");
    return 0;
}