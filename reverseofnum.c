#include<stdio.h>
int reverse(int n);
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    reverse(n);
}
int reverse(int n)
{
    int i=n;
    while(i>=1)
    {
        printf("%d\n",i);
        i--;
    }
}
