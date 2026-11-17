Q146: Create Employee structure with nested Date structure for joining date and print details.

/*
Sample Test Cases:
Input 1:
Employee: Raj | ID: 11 | Joining Date: 12 05 2020
Output 1:
Name: Raj | ID: 11 | Joining Date: 12/05/2020

*/
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

struct Student findTop(struct Student s[], int n) {
    struct Student top = s[0];
    int i;

    for (i = 1; i < n; i++) {
        if (s[i].marks > top.marks) {
            top = s[i];
        }
    }

    return top;
}

int main() {
    struct Student s[100], top;
    int n, i;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%s %d %d",
              s[i].name, &s[i].roll, &s[i].marks);
    }

    top = findTop(s, n);

    printf("Top Student: %s | Roll: %d | Marks: %d\n",
           top.name, top.roll, top.marks);

    return 0;
}