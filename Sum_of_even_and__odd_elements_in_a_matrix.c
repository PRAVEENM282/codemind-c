#include<stdio.h>
int main(){
    int r,c;
    scanf("%d%d",&r,&c);
    int i,j,a[r][c],k=0,l=0;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(a[i][j]%2==0){
                k=k+a[i][j];
            }
            else{
                l=l+a[i][j];
            }
        }
    }
    printf("%d %d",k,l);
}