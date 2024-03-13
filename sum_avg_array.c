#include<stdio.h>
void read(int[],int);
void display(int[],int);
int sum(int[],int);
int main()
{
    int a[100],n,s;
    float Avg;
    printf("enter the size of array\n");
    scanf("%d",&n);
    read(a,n);
    display(a,n);
    s=sum(a,n);
    printf("Sum of all array elements=%d\n",s);
    Avg=s/n;
    printf("Avg of all array elements=%.2f\n",Avg);
}
void read(int a[],int n)
{
    int i;
    printf("Reading all array elements...\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
void display(int a[],int n)
{
    int i;
    printf("Displaying all array elements...\n");
    for(i=0;i<n;i++)
    {
        printf("a[%d]=%d\n",i,a[i]);
    }
}
int sum(int a[],int n)
{
    int i,sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    return sum;
}
