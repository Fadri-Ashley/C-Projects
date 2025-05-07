#include <stdio.h>

int main(){
    int num1 = 10;
    int num2 = 5;
    // Arithmetic Operators
    printf("=== ARITHMETIC OPERATORS ===\n");
    

    printf("Addition: 10 + 5 = %d\n", num1 + num2);
    printf("Subtraction: 10 - 5 = %d\n", num1 - num2);
    printf("Multiplication: 10 * 5 = %d\n", num1 * num2);
    printf("Division: 10 / 5 = %d\n", num1 / num2);
    printf("Modulus: 10 %% 5 = %d\n", num1 % num2);
    printf("Increment: ++5 = %d\n", ++num2);
    printf("Decrement: --10 = %d\n", --num1);
    num1 = 10;
    num2 = 5;
    printf("\n");

    // Assignment Operators
    printf("=== ASSIGNMENT OPERATORS ===\n");
    int x;
    x = num1;
    printf("Assignment: %d\n", x);
    x += 3;
    printf("Addition Assignment: %d\n", x);
    x = num1;
    x -= 3;
    printf("Substraction Assignment: %d\n", x);
    x = num1;
    x *= 3;
    printf("Multiplication Assignment: %d\n", x);
    x = num1;
    x /= 2;
    printf("Division Assignment: %d\n", x);
    x = num1;
    x %= 3;
    printf("Modulus Assignment: %d\n", x);
    x = num1;
    x &= 3;
    printf("Bitwise AND Assignment: %d\n", x);
    x = num1;
    x |= 3;
    printf("Bitwise OR Assignment: %d\n", x);
    x = num1;
    x ^= 3;
    printf("Bitwise XOR Assignment: %d\n", x);
    x = num1;
    x >>= 3;
    printf("Right Shift Assignment: %d\n", x);
    x = num1;
    x <<= 3;
    printf("Left Shift Assignment: %d\n", x);
    printf("\n");


    // Comparison Operators
    printf("=== COMPARISON OPERATORS ===\n");
    
    printf("Equal to (10=5): %d\n", num1 == num2);
    printf("Not equal (10!=5): %d\n", num1 != num2);
    printf("Greater than (10>5): %d\n", num1 > num2);
    printf("Less than (10<5):%d\n", num1 < num2);
    printf("Greater than or equal to (10>=5): %d\n", num1 >= num2);
    printf("Less than or equal to (10<=5): %d\n", num1 <= num2);
    printf("\n");


    // Logical Operators
    printf("=== LOGICAL OPERATORS ===\n");

    printf("AND (num1 < 2 && num1 < 5): %d\n", num1 < 5 && num1 < 15);
    printf("OR (num1 < 2 || num1 < 5): %d\n", num1 < 5 || num1 < 15);
    printf("AND (!(num1 < 2 && num1 < 5)): %d\n", !(num1 < 5 && num1 < 15));
    


    return 0;
}