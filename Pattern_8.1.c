#include<stdio.h>
int main(){
    int n,i,j,k;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(j==i ||j==n-1-i)
            printf("%d ",i+1);
            else
            printf(" ");
        }
        printf("
");
    }
}