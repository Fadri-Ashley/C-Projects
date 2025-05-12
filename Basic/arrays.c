#include <stdio.h>

int main(){
    // Learn arrays in C Language
    int myNumbers[] = {25, 90, 7, 88, 1};

    printf("%d\n", myNumbers[0]);

    // Learn loop through an array
    for (int i = 0; i < 4; i++){
        printf("%d\n", myNumbers[i]);
    }

    // Set Array Size  
    int newArray[4];

    newArray[0] = 2;
    newArray[1] = 4;
    newArray[2] = 4;
    newArray[3] = 3;

    for (int i = 0; i < 4; i++){
        printf("%d\n", newArray[i]);
    }

    // Get Size or Length of Array
    printf("%lu", sizeof(myNumbers));

    int length = sizeof(myNumbers) / sizeof(myNumbers[0]);

    printf("\n%d", length);

    // Making Better Loops
    int newNumbers[] = {2, 45, 20, 14, 88};
    int newLength = sizeof(newNumbers) / sizeof(newNumbers[0]);

    for(int i = 0; i < length; i++){
        printf("\n%d", newNumbers[i]);
    }

    // Multidimensional Arrays

    int matrix[2][3] = {{1, 5, 8}, {4, 7, 6}};
    printf("\n%d", matrix[0][2]);

    // Loop Through a 2D Array
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            printf("%d\n", matrix[i][j]);
        }
    }

    return 0;
}