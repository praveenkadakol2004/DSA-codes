#include<stdio.h>
int factorial(int n);
int main()
{
    int n,f;
    printf("Enter the value for n: ");
    scanf("%d",&n);
    f=factorial(n);
    printf("Factorial of %d is %d",n,f);
}
int factorial(int n)
{
    int i=1;
    int fact=1;
    while(i<=n)
    {
        fact=fact*i;
        i++;
        printf("%d \n",i);
    }
    return fact;
}

