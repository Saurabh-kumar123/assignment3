#include<stdio.h>
int main()
{
    int n;
    printf("enter a number\n");
    scanf("%d",&n);
    if(n%2==0&&n%3==0)
    printf("divisible");
    else
    printf("not divisible");
    return 0;
}