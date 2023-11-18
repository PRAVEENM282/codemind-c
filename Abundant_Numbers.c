#include<stdio.h>
int main(){
	int i=1,n,s=0;
	scanf("%d",&n);
	while(i<n)
	{
		if(n%i==0)
		{
		s=s+i;
		}
		
		i++;
	}
if(n<=s){
    printf("True");
}
else {
    printf("False");
}
}