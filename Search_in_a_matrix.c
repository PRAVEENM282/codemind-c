#include<stdio.h>
int main(){
    int n,m,i,j;
    scanf("%d %d",&n,&m);
    int a[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);
    }}
    int k,l=0;
    scanf("%d",&k);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(a[i][j]==k)
            {l=1;
            break;}
        }
    }
    if(l==1)
    printf("1");
    else
    printf("0");
}