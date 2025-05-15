#include <stdio.h>
#include <string.h>

int main(){
    // Learn C String Functions
    // Learn String Length

    char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char alphabet2[50] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("Used strlen: %d\n", strlen(alphabet));
    printf("Used sizeof: %d\n", sizeof(alphabet));
    printf("Used strlen alphabet2: %d\n", strlen(alphabet2));
    printf("Used sizeof alphabet2: %d\n", sizeof(alphabet2));

    // Learn Concatenate Strings
    char str1[20] = "Hello ";
    char str2[] = "World!";

    strcat(str1, str2);

    printf("%s\n", str1);
    
    // Compare Strings
    char stra[] = "Hello"; 
    char strb[] = "Hello";
    char strc[] = "Hi";

    printf("%d\n", strcmp(stra, strb));

    printf("%d\n", strcmp(stra, strc));

    return 0;
}