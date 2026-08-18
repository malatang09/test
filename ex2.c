#include <stdio.h>

int main()
{
    int scores[5];
    int i;
    int max;
    int index = 0;
    char *name;

    // Input scores
    printf("Enter 5 scores:\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &scores[i]);
    }

    // PART 1 : Get the index of the max score
    max = scores[0];

    for(i = 1; i < 5; i++)
    {
        if(scores[i] > max)
        {
            max = scores[i];
            index = i;
        }
    }

    // PART 2 : Get the name related to the max score
    if(index == 0)
        name = "Sophea";
    else if(index == 1)
        name = "Phary";
    else if(index == 2)
        name = "Sovann";
    else if(index == 3)
        name = "Rasmey";
    else
        name = "Ronan";

    // PART 3 : Print the result
    printf("The best student is %s\n", name);

    return 0;
}