#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a==b && a==c)
    printf("Equilateral triangle");
    else if(a==b && a!=c || b==c && b!=a || a==c && a!=b)
    printf("Isosceles triangle");
    else if(a!=b && a!=c && b!=c)
    printf("Scalene triangle");
}