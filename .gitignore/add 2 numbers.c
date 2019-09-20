#include<stdio.h>
int input()
{
    int a;
    printf("enter the number\n");
    scanf("%d",&a);
    return a;
}
int add(int a,int b)
{
    return a+b;
}
void output(int a,int b,int c)
{
    printf("%d+%d is %d\n",a ,b,c);
    return c;
}
int main()
{
    int a,b,c;
    a=input();
    b=input();
    c=add(a,b);
    output(a,b,c);
    
}
