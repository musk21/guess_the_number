#include <stdio.h>
#include <stdlib.h> //use to generate random number
#include <time.h>   // used to generae different no each time

int main()
{
    int number, guess ,nguess=1;
    srand(time(0));            //intializing the number
    number = rand() % 100 + 1; //generates random number between 1 to 100 if rand()%100 then random no between 0 to 100
   // printf("the number is %d \n", number);
    //keep running the loop until the number is guessed
    do
    {
        printf("guess the number between 1 to 100 \n");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("lower no please! \n");
        }
        else if(guess<number)
        {
            printf("higher no please! \n");
        }
        else{
         printf("you guess in %d attempts ! \n",nguess);
        }
        nguess++;
    } while (guess!=number);
    return 0;
}