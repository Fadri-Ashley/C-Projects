#include <stdio.h>
#include <stdbool.h>

int main() {
    // first time learn if else in C language
    int time = 21;
    bool feel = 0;

    if (time < 12) {
        printf("Morning anon\n");
    } else if (time < 15) {
        printf("How about having lunch with me? anon\n");
    } else {
        printf("Oyasumi anon\n");
        (feel == 1) ? printf("You did great today!") : printf("Focus on improving yourself, not proving yourself");
    }

    return 0;
}