#include <stdio.h>

int main(){
    for (int i = 0; i < 5; i++){
        printf("%d\n", i);
    }

    for (int i = 0; i < 10; i++){
        printf("\nOuter: %d\n", i);

        for (int j = 0; j < 10; j++){
            for (int k = 0; k <= j; k++)
                printf("%d", k + 1);
                printf("\n");
        }
    }

    return 0;
}