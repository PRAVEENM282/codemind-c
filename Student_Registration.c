#include<stdio.h>
int main(){
    int i,t;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        int n,m,k;
        scanf("%d%d%d",&n,&m,&k);
        m-=k;
        if(m-n>=0){
            printf("YES
");
        }
        else {
            printf("NO
");
        }
    }
}