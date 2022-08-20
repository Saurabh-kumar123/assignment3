#include<stdio.h>
int main()
{
    int n;
    printf("enter a number\n");
    scanf("%d",&n);
    if((n/100>=1)&&(n/100<=9))
    printf("Ther are 3 digit number");
    else
    printf("Not 3 digit number");
    return 0;

}