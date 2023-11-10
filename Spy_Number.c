#include <stdio.h>
int main()
{
int n,f,s=0,m=1;
scanf("%d",&n);
while(n)
{
    f=n%10;
    s=s+f;
    m=m*f;
    n=n/10;
}
 if(s==m){
    printf("Spy Number");
    }
    else {
    printf("Not Spy Number");
}
}
