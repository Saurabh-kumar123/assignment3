#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("enter a 5 sub marks\n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    if(a>=33&&b>=33&&c>=33&&d>=33&&e>=33)
    printf("result is pass\n");
    else
    printf("result is fail\n");
    return 0;
}