#include<stdio.h>
int main(){
    int i,j,t,a,b,k,c;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        c=0;
        scanf("%d%d",&a,&b);
       for(j=a;j<=b;j++){
           k=j%10;
           if(k==2 || k==3 || k==9){
               c++;
           }
       }
       printf("%d
",c);
    }
}