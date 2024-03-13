#include<stdio.h>
void read(int[],int);
void display(int[],int);
void insertionsort(int[],int);
void display1(int[],int);
int main()
{
    int a[100],n;
    printf("enter the size of array\n");
    scanf("%d",&n);
    read(a,n);
    display(a,n);
    insertionsort(a,n);
    display1(a,n);
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
    printf("Displaying all array elements before sorting...\n");
    for(i=0;i<n;i++)
    {
        printf("a[%d]=%d\n",i,a[i]);
    }
}
void display1(int a[],int n)
{
    int i;
    printf("Displaying all array elements after insertion sorting...\n");
    for(i=0;i<n;i++)
    {
        printf("a[%d]=%d\n",i,a[i]);
    }
}

void insertionsort(int a[], int n)
{
     int i, j, key;
     for(i=1; i<n; i++)
     {
         key = a[i];
          j = i-1;
        while(j>=0 && key < a[j])
        {    a[j+1] = a[j];
             j--;
        }
        a[j+1] = key;

    }
}

