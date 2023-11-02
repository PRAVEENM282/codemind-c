#include<stdio.h>
int main()
{
	int i,n,m,s;
	scanf("%d%d%d",&n,&m,&s);
	for(i=m;i<=s;i++){
		printf("%d x %d = %d
",n,i,n*i);
	}
}