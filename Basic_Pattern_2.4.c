#include<stdio.h>
int main(){
    int n,j,i;
    scanf("%d",&n);
    for(i=n;i>0;i--){
        for(j=i;j<=n;j++){
            printf("%d ",j);
        }
        printf("
");
    }
}