#include<stdio.h>
int main()
{
    float x;
    scanf("%f",&x);
    if(x<3.0)
    printf("LIGHT");
    else if(x>=3.0 && x<7.0)
    printf("MODERATE");
    else if(x>=7.0)
    printf("HEAVY");
}