
#include<stdio.h>
#include<conio.h>
#include<math.h>
float input()
{
    float a;
    printf("enter the number to be inserted\n");
    scanf("%f",&a);
    return a;
}
float calculate(float x1,float x2,float y1,float y2 )
{
    return sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
}
void output(float x1,float x2,float y1,float y2,float d)
{
    printf("%f%f & %f%f is %f\n",x1,y1,x2,y2,d);
}
int main( )
{
    float x1,x2,y2,y1,d;
    x1=input();
    x2=input();
    y1=input();
    y2=input();
    d=calculate(x1,x2,y1,y2);
    output(x1,x2,y1,y2,d);
    return 0;
}
