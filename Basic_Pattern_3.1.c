#include<stdio.h>
int main() {
    int n,j,i;
    scanf("%d",&n);
    for(i=n;i>0;i--){
        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf("
");
    }
}