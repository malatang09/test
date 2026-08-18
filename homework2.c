#include <stdio.h>

int main(){

    float temp[7];
    float sum = 0;
    float max, min;
    int maxDay = 0, minDay = 0;
    int hotDays = 0;

    printf("Enter temperature for 7 days:\n");

    for(int i = 0; i < 7; i++){
        scanf("%f",&temp[i]);
        sum += temp[i];
    }

    max = min = temp[0];

    for(int i = 1; i < 7; i++){

        if(temp[i] > max){
            max = temp[i];
            maxDay = i;
        }

        if(temp[i] < min){
            min = temp[i];
            minDay = i;
        }

        if(temp[i] > 30){
            hotDays++;
        }
    }

    float avg = sum / 7;

    printf("Maximum temperature: %.2f on day %d\n", max, maxDay+1);
    printf("Minimum temperature: %.2f on day %d\n", min, minDay+1);
    printf("Average temperature: %.2f\n", avg);
    printf("Days above 30C: %d\n", hotDays);

    return 0;
}
