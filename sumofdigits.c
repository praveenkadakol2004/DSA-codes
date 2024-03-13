#include<stdio.h>
void display_digits_sum(int number);
int main()
{
    int number,d;
    printf("Enter the number");
    scanf("%d",&number);
    display_digits_sum(number);
    //printf("Sum = %d",d);
}
void display_digits_sum(int number)
{
    int rem,sum=0;
    while(number!=0)
    {
        rem=number%10;
        printf("%d\n",rem);
         sum=sum+rem;
        number=number/10;
    }
    printf("Sum = %d",sum);
}
