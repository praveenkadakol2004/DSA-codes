#include<stdio.h>
int max(int,int,int);
int main()
{
 int a,b,c,res;
 printf("enter the numbers\n");
 scanf("%d%d%d",&a,&b,&c);
 res=max(a,b,c);
 printf("maximum number among three numbers is %d",res);
 }
 int max(int a,int b,int c)
 {
 if(a>b&&a>c)
  return a;
  else if(b>a&&b>c)
  return b;
  else
  return c;
}
