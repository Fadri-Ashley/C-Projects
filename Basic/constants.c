#include <stdio.h>

int main(){
    const int x = 100;
    // x = 666; the variable is unchangeable and read only
    printf("You cannot change this value: x = %d", x);

    return 0;
}