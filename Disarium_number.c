#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,k=0,f,i,j,s=0,p;
    scanf("%d",&n);
    m=n;
     while(n!=0)
     {
        j=n%10;
        i=(i*10)+j;
        n=n/10;
     }
     while(i){
         f=i%10;
         i/=10;
         k++;
         p=pow(f,k);
         s=s+p;
     }
     if(s==m)
     printf("True");
     else
     printf("False");
    
}