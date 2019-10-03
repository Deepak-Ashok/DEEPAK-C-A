#include <stdio.h>
int input()
{
    int a;
    printf("enter the number\n");
    scanf("%d",&a);
    return a;
}
int compute(int a,int b,int c)
{
    if(a<b&&a<c)
    {
        return a;
    }
    else if(b<c)
    {
        return b;
    }
    else
    {
        return c;
    }
}
void display(int a,int b,int c,int d)
{
    printf("minimum number is %d\n",d);
    
}
int main()
{
    int a,b,c,d;
    a=input();
    b=input();
    c=input();
   d= compute(a,b,c);
    display(a,b,c,d);
}
