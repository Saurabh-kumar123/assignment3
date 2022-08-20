#include<stdio.h>
int main()
{
    int a,b,c,n;
    printf("enter a quadratic equation\n");
    scanf("%d%d%d",&a,&b,&c);
    n=b*b-4*a*c;
    if(n>0)
    printf("real and distinct\n");
    else if(n==0)
    printf("real and equal \n");
    else
    printf("imagenary root");
    return 0;
}