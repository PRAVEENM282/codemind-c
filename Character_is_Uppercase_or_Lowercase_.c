#include<stdio.h>
int main()
{
    char c;
    scanf("%c",&c);
    if(c>=65 && c<=90)
    printf("uppercase alphabet");
    else if(c>=97 && c<=122)
    printf("lowercase alphabet");
    else
    printf("not an alphabet");
    
}