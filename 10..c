#include<stdio.h>
int main()
{
    int a,x,y;
    float z;
    printf("enter a cost price\n");
    scanf("%d",&x);
    printf("enter a selling price\n");
    scanf("%d",&y);
    a=y-x;
    if(a>0)
    {
        z=a*100.0/x;
        printf("profit  %f percent",z);
    }
   else 
    {
        z=-a*100.0/x;
        printf("loss  %f percent",z);
        return 0;
    }
}