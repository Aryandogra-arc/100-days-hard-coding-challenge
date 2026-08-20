#include<stdio.h>
int main(){
int a;
printf("enter the number ");
scanf("%d", &a);
if (a == 1)
{
    printf("monday");
}
else if (a == 2)
{
    printf("tuesday");
}
else if (a == 3)
{
    printf("wednesday");
}
else if (a == 4)
{
    printf("thrusday");
}
else if (a == 5)
{
    printf("friday");
}
else if (a ==6)
{
    printf("saturday");
}
else 
{
    printf("sunday");
}
return 0;
}