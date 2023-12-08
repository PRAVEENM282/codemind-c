#include<stdio.h>
int main()
{
    int m,j,i;
    scanf("%d",&m);
    for(i=m;i>0;i--){
        for(j=1;j<=i;j++){
            printf("%d ",j);
            
        }
        printf("
");
    }
}