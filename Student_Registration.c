#include<stdio.h>
int main() {
    int t,n,m,k,i;
    scanf("%d",&t);
    for(i=0;i<t;i++) {
        scanf("%d%d%d",&n,&m,&k);
        m-=k;
        if((m-n)>=0){
            printf("YES
");
        }
        else {
            printf("NO
");
        }
    }
}