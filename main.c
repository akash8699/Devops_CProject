// main.c
#include <stdio.h>
#include "Fact.h"
#include "Pal.h"
#include "big3.h"

int main() {
    int choice, a, b, c;

    printf("Choose operation:\n1. Factorial\n2. Palindrome\n3. Biggest of 3\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter number: ");
            scanf("%d", &a);
            factorial(a);
            break;
        case 2:
            printf("Enter number: ");
            scanf("%d", &a);
            check_palindrome(a);
            break;
        case 3:
            printf("Enter 3 numbers: ");
            scanf("%d %d %d", &a, &b, &c);
            find_biggest(a, b, c);
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}

