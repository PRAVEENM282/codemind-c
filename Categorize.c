#include<stdio.h>
int main()
{
    float h;
    scanf("%f",&h);
    if(h<150.0)
   printf("The person is Dwarf.");
   else if(h>=150.0 && h<=165.0)
printf("The person is average heighted.");
 else if(h>165.0 && h<=195.0)
printf("The person is taller.");
else if(h>195.0)
printf("Abnormal height.");
}