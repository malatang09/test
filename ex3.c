#include <stdio.h>

int main()
{
    int numbers[5];  
    int i;
    int temp;        
    for(i = 0; i < 5; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    temp = numbers[0];

    for(i = 0; i < 4; i++)
    {
        numbers[i] = numbers[i + 1];
    }

    numbers[4] = temp;

    printf("\nArray after shifting left:\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", numbers[i]);
    }

    return 0;
}