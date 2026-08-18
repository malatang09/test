#include <stdio.h>

int main()
{
    int exams[5];   
    int i;
    int passed = 1; 
    
    for(i = 0; i < 5; i++)
    {
        printf("Enter score %d: ", i + 1);
        scanf("%d", &exams[i]); 
    }

    for(i = 0; i < 5; i++)
    {
        if(exams[i] < 50)
        {
            passed = 0; 
            break;      
        }
    }

    if(passed == 1)
    {
        printf("passed\n");
    }
    else
    {
        printf("failed\n");
    }

    return 0;
}