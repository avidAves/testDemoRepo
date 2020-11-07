#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RAND_MAX 10

#define MAX 256

int main(void)
{
    srand(time(NULL));
    int randomMeter = 0;
    for (int i = 0; i < 10; i++)
    {
        int x = rand() % 10;
        if (x >= 5)
        {
            randomMeter++;
            printf("%d (Meter Increase!)\n", x);
        }
        else
        {
            printf("%d (No Meter)\n", x);
        }
    }
    printf("Final tally of the meter: %d\n", randomMeter);
    if(randomMeter >= 5)
    {
        printf("The school has fallen into chaos!");
    }
    else
    {
        printf("The school is fine!");
    }
}