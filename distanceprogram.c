#include<stdio.h>
#include<math.h>
struct point
{
    float x;
    float y;
};
struct point input()
{
    struct point A;
    printf("enter the number\n");
    scanf("%f%f",&A.x,&A.y);
    return A;
    
}
float compute(struct point p1,struct point p2)
{
    float r;
    r=sqrt((p2.x-p1.x)*(p2.x-p1.x)+(p2.y-p1.y)*(p2.y-p1.y));
    return r;
}
void output(struct point p1,struct point p2,float r)
{
    printf("distance between %f%f and %f%f is %f",p1.x,p1.y,p2.x,p2.y,r);
}
int main()
{
    float r;
    struct point p1=input();
    struct point p2=input();
    r=compute(p1,p2);
    output(p1,p2,r);
    return 0;
}

