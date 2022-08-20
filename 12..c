#include<stdio.h>
int main()
{
    char i;
    printf("enter a alphabet\n");
    scanf("%c",&i);
    if(i>='a'&&i<='z')
    printf("lowercase");
    else
    printf("uppercase");
    return 0;
}