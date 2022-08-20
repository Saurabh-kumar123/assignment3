#include<stdio.h>
int main()
{
    int year;
    printf("enter a year\n");
    scanf("%d",&year);
    if((year%100==0&&year%400==0)||(year%100!=0&&year%4==0))
    printf("this year is leap year",year);
    else
    printf("this is not leap year");
    return 0;
}