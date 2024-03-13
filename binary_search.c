#include<stdio.h>
void read(int[],int);
void display(int[],int);
void sort(int[],int);
int binarysearch(int [],int,int);
int main()
{
    int a[100],n,res,key;
    printf("enter the size of array\n");
    scanf("%d",&n);
    read(a,n);
    sort(a,n);
    display(a,n);
    printf("enter searching element..\n");
    scanf("%d",&key);
    res=binarysearch(a,n,key);
    if(res == -1)
         printf("%d is not found\n",key);
    else
        printf("%d is  found\n",key);
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
    for(i=0;i<n;i++)
    {
        printf("a[%d]=%d\n",i,a[i]);
    }
}
void sort(int a[],int n)
{
    int i,j,temp;
    printf("the sorted array is....\n");
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j] > a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }

        }

    }
}
int binarysearch(int a[],int n,int key)
{
    int low = 0;
    int high = n - 1;
    int mid;
    while(low<=high)
    {
        mid = (high+low)/2;
        if (a[mid] == key)
        {
            return mid;
        }
        else if(key > a[mid])
        {
            low = mid + 1;
        }

        else if(key < a[mid])
        {
            high = mid - 1;
        }
    }
    return -1;
}

