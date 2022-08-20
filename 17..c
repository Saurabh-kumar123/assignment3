#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter a sides of a triangle\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c&&b+c>a&&a+c>b)
    printf("This is a valide triangle");
    else
    printf("This is not valide triangle");
    return 0;
}