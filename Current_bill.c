#include<stdio.h>
int main()
{
    int u;
    float c,p;
    scanf("%d",&u);
    if(u<200)
    {
        c=u*1.20;
        if(c<400)
        {
            c=c+100;
        }
        else if(c>=400)
        {
           p=(c*15)/100;
           c=c+p;
        }
        printf("%.2f",c);
    }
    else if(u>=200 && u<400)
    {
        c=u*1.50;
         if(c<400)
        {
            c=c+100;
        }
        else if(c>=400)
        {
           p=(c*15)/100;
           c=c+p;
        }
        printf("%.2f",c);
    }
    else if(u>=400 && u<600)
    {
        c=u*1.80;
         if(c<400)
        {
            c=c+100;
        }
        else if(c>=400)
        {
           p=(c*15)/100;
           c=c+p;
        }
        printf("%.2f",c);
    }
    else if(u>=600)
    {
        c=u*2.00;
         if(c<400)
        {
            c=c+100;
        }
        else if(c>=400)
        {
           p=(c*15)/100;
           c=c+p;
        }
        printf("%.2f",c);
    }
    
}