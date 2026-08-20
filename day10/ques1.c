#include<stdio.h>
int main(){
int a, b, c;
printf("Enter the side of triangle =");
scanf("%d %d %d", &a, &b, &c);
if (a == b && b == c )
{
    printf("the triangle is equilateral triangle");
} 
else if (a == b || b == c || c == a)
{
    printf("the triangle is Isosceles triangle");
}
else
{
    printf("the triangle is scalene triangle");
}
return 0;
}