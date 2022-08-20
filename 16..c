#include<stdio.h>
int main()
{
   char ch;
   printf("enter a character\n");
   scanf("%c",&ch);
   if(ch>='a'&&ch<='z')
   printf("alphabet lowercase");
   else if(ch>='A'&&ch<='Z')
   printf("alphabet uppercase");
   else if(ch>='0'&&ch<='9')
   printf("digit");
   else
   printf("special character");
    return 0;
}