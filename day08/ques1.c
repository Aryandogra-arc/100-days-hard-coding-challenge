#include<stdio.h>
int main() {
    char character;
    printf("enter the value = ");
    scanf("%c", &character);
    if(character >= 'A' && character <='Z')
    {
        printf("uppercase");
    }
    else if(character >='a' && character <='z')
    {
        printf("lowercase");
    }
    else if(character >='0' && character <='9')
    {
        printf("digit");
    } else
    {
        printf("special character");
    }
 return 0;
}