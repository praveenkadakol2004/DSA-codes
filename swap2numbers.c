#include<stdio.h>
int swap(int,int);
int main()
{
    int a,b;
    printf("enter two numbers\n");
    scanf("%d%d",&a,&b);
    printf("numbers before swapping=%d%d\n",a,b);
    swap(a,b);
}
int swap(int a,int b)
{
    int c;
    c=a;
    a=b;
    b=c;printf("numbers after swapping =%d%d\n",a,b);
}
