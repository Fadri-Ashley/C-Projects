#include <stdio.h>

int main() {
    // Learn input number and character
    int myNum;
    char myChar;

    printf("Type a number and character: \n");

    scanf("%d %c", &myNum, &myChar);

    printf("Your number is: %d\n", myNum);
    printf("Your number is: %c\n", myChar);

    return 0;
}