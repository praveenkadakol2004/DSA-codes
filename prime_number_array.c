#include<stdio.h>
void read(int[],int);
void display(int[],int);
void prime(int [],int);
int main()
{
    int a[100],n;
    printf("enter the size of array\n");
    scanf("%d",&n);
    read(a,n);
    display(a,n);
    prime(a,n);
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
void prime(int a[],int n)
{
    int i,j,counter=0;
    for(i=0;i<n;i++)
    {
        for(j=2;j<a[i];j++)
        {
                 if(a[i]%j==0)
                 {
                   counter=1;
                   break;
                 }
                 else
                    counter=0;
        }
        if(counter==0)
        {
            printf("%d is a prime number\n",a[i]);
        }

    }

}

