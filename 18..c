#include<stdio.h>
int main()
{
    int m;
    printf("enter a month number\n");
    scanf("%d",&m);
    if(1==m)
    printf("31 days");
     else if(2==m)
    printf("28 days");
    else if(3==m)
    printf("31 days");
    else if(4==m)
    printf("30 days");
    else if(5==m)
    printf("31 days");
    else if(6==m)
    printf("30 days");
    else if(7==m)
    printf("31 days");
    else if(8==m)
    printf("31 days");
    else if(9==m)
    printf("30 days");
    else if(10==m)
    printf("31 days");
    else if(11==m)
    printf("30 days");
    else if(12==m)
    printf("31 days");
    return 0;
}