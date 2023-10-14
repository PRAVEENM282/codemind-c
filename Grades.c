#include<stdio.h>
int main()
{
    int p,c,b,m,cs,s,pr;
    scanf("%d%d%d%d%d",&p,&c,&b,&m,&cs);
    s=p+c+b+m+cs;
    pr=s/5;
    if(pr>=90)
    printf("Grade A");
     else if(pr>=80)
    printf("Grade B");
     else if(pr>=70)
    printf("Grade C");
     else if(pr>=60)
    printf("Grade D");
     else if(pr>=40)
    printf("Grade E");
     else if(pr<40)
    printf("Grade F");
    
}