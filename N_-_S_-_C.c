#include<stdio.h>
int main()
{
	int i,n,m,s,c;
	scanf("%d%d",&n,&m);
	n=n+1;
	for(i=n;i<m;++i){
	    s=i*i;
	    c=i*i*i;
        printf("%d %d %d
",i,s,c);  	
	}
}