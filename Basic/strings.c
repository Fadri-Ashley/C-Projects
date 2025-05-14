#include <stdio.h>

int main(){
    // Learn Strings
    char greetings[] = "Hello World!";
    printf("%s\n", greetings);
    printf("%c\n", greetings[0]);

    // Modify Strings
    greetings[0] = 'J';
    printf("%s\n", greetings);

    // Loop Through a String
    char carName[] = "Volvo";
    int length = sizeof(carName) / sizeof(carName[0]);

    for(int i = 0; i < length; i++){
        printf("%c\n", carName[i]);
    }

    // Another Way of Creating Strings
    char greetings2[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
    printf("%s\n", greetings2);

    // Real Life Example
    char message[] = "Good to see you,";
    char fname[] = "John";

    printf("%s %s", message, fname);

    return 0;
}