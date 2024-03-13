#include<stdio.h>
int main()
{
    char ch;
    printf("enter character:");
    scanf("%c",&ch);
    if(ch>=48 && ch<=57)
        printf("digits");
   else if(ch>=65 && ch<=90)
        printf("uppercase");
   else if(ch>=97 && ch<=122)
        printf("lowercase");
   else
        printf("special case");
}
