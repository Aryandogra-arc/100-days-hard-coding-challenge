#include<stdio.h>
int main(){
	int a, b;

	printf("enter the two number:");
	scanf("%d %d", &a, &b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("after swapping the number a= %d, b= %d \n", a, b);
	return 0;
}