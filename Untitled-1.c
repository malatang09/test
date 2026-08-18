#include <stdio.h>

int main()
{
    int scores[5], i, max, index = 0;
    char *names[5] = {"Sophea","Phary","Sovann","Rasmey","Ronan"};

    for(i = 0; i < 5; i++)
        scanf("%d", &scores[i]);

    max = scores[0];

    for(i = 1; i < 5; i++)
        if(scores[i] > max){
            max = scores[i];
            index = i;
        }

    printf("The best student is %s", names[index]);

    return 0;
}20