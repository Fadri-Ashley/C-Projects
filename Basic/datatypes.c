#include <stdio.h>

int main(){
    // Learn data types
    int myNum = 10;
    float myFloatNum = 5.99;
    double myDoubleNum = 6.99;
    char myCharacter = 'A';
    
    printf("=== DATA TYPES ===\n");
    printf("int myNum value is %d\n", myNum);
    printf("float myFloatNum value is %f\n", myFloatNum);
    printf("double myDoubleNum value is %lf\n", myDoubleNum);
    printf("char myChar value is %c\n", myCharacter);
    printf("\n");

    // Characters
    char myGrade = 'A';
    char a = 65, b = 66, c = 67;
    char myText[] = "Nosantos"; // My game's nickname
    printf("=== CHARACTERS ===\n");
    printf("My Grade is %c\n", myGrade);
    printf("65 is ASCII number of %c\n", a);
    printf("66 is ASCII number of %c\n", b);
    printf("67 is ASCII number of %c\n", c);
    printf("char myText[] value is %s\n", myText);
    printf("\n");

    // Numbers
    printf("=== NUMBERS ===\n");
    int x = 7;
    float y = 0.99;
    double z = 12.34;
    printf("Int:\n");
    printf("My fav number is %d\n", x);
    printf("Float:\n");
    printf("%.2f\n", y); // Use decimal precision for remove extra zeros
    printf("Double:\n");
    printf("%.2lf\n", z);
    printf("\n");

    // Memory Size
    printf("=== MEMORY SIZE ===\n");
    int myInt;
    float myFloat;
    double myDouble;
    char myChar;

    printf("Memory Size of int is %lu\n", sizeof(myInt));
    printf("Memory Size of float is %lu\n", sizeof(myFloat));
    printf("Memory Size of double is %lu\n", sizeof(myDouble));
    printf("Memory Size of char is %lu\n", sizeof(myChar));
    printf("\n");

    // Type Conversion
    printf("=== TYPE CONVERSION ===\n");
    int num1 = 5;
    int num2 = 2;
    float sum = (float) 5/2;
    
    printf("%.1f", sum);

    return 0;
}