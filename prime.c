#include<stdio.h>
void pn(int)
int main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    pn(n)
}
void pn(int n)
{
    int i,count=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
}
if (count==2)
{
    printf("%d is prime number",n);
}
else
    {
        printf("%d is composite number",n);
    }
