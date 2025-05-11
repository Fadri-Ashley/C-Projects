#include <stdio.h>

int main(){
    int i;

    printf("=== Break in For Loop ===\n");

    for (i=0; i<10; i++){
        if (i == 4) {
            break;
        }
        printf("%d\n", i);
    }

    printf("=== Continue in For Loop ===\n");

    for (i=0; i < 10; i++){
        if (i == 4){
            continue;
        }
        printf("%d\n", i);
    }

    printf("=== Break in While Loop ===\n");

    i = 0;

    while (i<10) {
        if (i == 4){
            break;
        }
        printf("%d\n", i);
        i++;
    }

    printf("=== Continue in While Loop ===\n");

    i = 0;

    while (i<10) {
        if (i == 4){
            i++;
            continue;
        }
        printf("%d\n", i);
        i++;
    }


    return 0;
}