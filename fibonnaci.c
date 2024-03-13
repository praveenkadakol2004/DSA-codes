#include<stdio.h>
int fib(int number);
int main()
{
    int number;
    printf("Enter a number");
    scanf("%d",&number);
    fib(number);
}
int fib(int number)
{
    int i,a=0,b=1,c;
    for(i=1;i<=number;i++)
    {
        printf("%d ",a);
        c=a+b;
        a=b;
        b=c;
    }
}

