#include<stdio.h>
void display_even_odd(int n);
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    if(n>0)
    {
        display_even_odd(n);
    }
    else
        printf("Positive number required");
    return 0;

}
void display_even_odd(int n)
{
    int i=1;
    printf("Odd number are: ");
    while(i<=n)
    {
        if(i%2!=0)
            printf("%d\t",i);
        i++;
    }
    printf("\n");
    i=1;
    printf("Even number are: ");
    while(i<=n)
    {
        if(i%2==0)
        printf("%d\t",i);
        i++;
    }
}

