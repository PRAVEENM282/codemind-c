#include <stdio.h>
int main() {
    int i,m,n,o,S,t,k;
    scanf("%d%d",&n,&m);
    for (i = n; i <= m; i++) {
         o = i;
         S = 1;
        t= o;
        while (t > 0) {
             k = t % 10; 
            if (k == 0 || o % k != 0) {
                S = 0;
                break;
            }
            t /= 10; 
        }
        if (S) {
            printf("%d ", o);
        }
    }
}