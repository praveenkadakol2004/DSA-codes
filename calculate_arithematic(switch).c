#include<stdio.h>
int  aroptr(int,int,char);
int main()
{

     int a,b,op,res;
     printf("enter numbers and operator\n");
     scanf("%d %d %c",&a,&b,&op);
     res=aroptr(a,b,op);
     printf("result is=%d",res);
}
int aroptr(int a,int b,char op)
{
    int c;
    switch(op)
    {

        case '+':c=a+b;
        return c;
        break;
        case '-':c=a-b;
        return c;
        break;
        case '*':c=a*b;
        return c;
        break;
        case '/':c=a/b;
        return c;
        break;
        default:printf("invalid operation\n");
        return 0;
        break;
    }
}
