#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int number, guess, nguess = 1;
    srand(time(0));
    number = rand() % 10 + 1;
   
    do
    {
        printf("guess the no between 1 and 10 \n");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("lower no please \n");
        }
        else if (guess < number)
        {
            printf("higher no please \n");
        }
        else
        {
            printf("you guess it in %d attempts\n",nguess);
        }
        nguess++;
    } while (guess != number);

    return 0;
}