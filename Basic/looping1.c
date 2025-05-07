#include <stdio.h>

int main()
{
    int x = 0;
    int i;
    i = x;

    // While loop
    while (i <= 100)
    {
        printf("%d\n", i);
        i += 10;
    }

    // Do While loop
    i = x;
    do
    {
        printf("%d\n", i);
        i++;
    } while (i < 5);

    printf("=== REVERSE NUMBER ===\n");

    int numbers = 123456789;

    int revNumbers = 0;

    while (numbers)
    {
        revNumbers = revNumbers * 10 + numbers % 10;
        numbers /= 10;
    }
    printf("%d", revNumbers);

    return 0;
}