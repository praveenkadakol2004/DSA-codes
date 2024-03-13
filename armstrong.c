#include<stdio.h>
int armstrong(int number);
int main()
{
    int number,temp,d;
    printf("Enter the number : ");
    scanf("%d",&number);
    armstrong(number);
}
int armstrong(int number)
{
    int rem,arm=0;
    int temp=number;
    while(number!=0)
    {
        rem=number%10;
        arm=(rem*rem*rem)+arm;
        number=number/10;
    }
    if(temp==arm)
    printf("%d armstrong number",temp);
    else
        printf("%d is not a armstrong number",temp);
}

