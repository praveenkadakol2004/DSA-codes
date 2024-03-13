#include<stdio.h>
int copy_string(int);
main()
{
    char string1[100], string2[100];
    int i;
    printf("enter string1:\n");
    gets(string1);
    printf("enter string2:\n");
    gets(string2);

}
void copy(char string1[],char string2[])
{
    int i;
    for(i=0;string1[i]!=0;i++)
    {
        string2[i]=string1[i];
    }
    puts(string1);
    puts(string2);
}
