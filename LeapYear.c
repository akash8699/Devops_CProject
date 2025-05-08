#include <stdio.h>
#include <stdlib.h>
//This program is to find leap year
int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <year>\n", argv[0]);
        return 1;
    }

    int year = atoi(argv[1]);

    if (year <= 0) {
        printf("Invalid year. Please enter a positive integer.\n");
        return 1;
    }

    if ((year % 400 == 0) || (year % 100 != 0 && year % 4 == 0)) {
        printf("%d is a Leap Year.\n", year);
    } else {
        printf("%d is not a Leap Year.\n", year);
    }

    return 0;
}
