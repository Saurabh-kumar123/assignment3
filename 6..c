#include<stdio.h>
int main()
{
    int x,a,b;
    printf("enter a two number\n");
    scanf("%d%d",&a,&b);
    x=a>b?a:b;
    printf("%d is greater number");
    return 0;
}