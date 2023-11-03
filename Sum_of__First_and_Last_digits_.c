#include<stdio.h>
int main(){
	int n,m,s;
	scanf("%d",&n);
	
	m=n%10;
while(n>=10)
{
	n=n/10;
	}
	s=m+n;
	printf("%d",s);
}
