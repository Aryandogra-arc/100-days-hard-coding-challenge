#include<stdio.h>
int main(){
    int letter;
    printf("Enter a letter: ");
    scanf("%d", &letter);
    if(letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u')
    {
        printf("The letter is a vowel.");
    }
    else
    {
        printf("The letter is not a vowel.");
    }
    return 0;
}