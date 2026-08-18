#include <stdio.h>

int main()
{
    int numbers[5];   
    int reverse[5];   
    int i;

    for(i = 0; i < 5; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    for(i = 0; i < 5; i++)
    {
        reverse[i] = numbers[4 - i];
    }

    printf("\nReversed array:\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", reverse[i]);
    }

    return 0;
}