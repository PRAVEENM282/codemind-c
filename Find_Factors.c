#include<stdio.h>
int main()
{
    int i,f;
    scanf("%d",&f);
    for(i=1;i<=f;i++){
        if(f%i==0){
            printf("%d ",i);
        }
    }
}