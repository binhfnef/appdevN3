// This program will generate 100 random numbers between 0 and 99.
// and displays them in a 10x10 matric on the screen
#include <stdio.h>      //for printf() and scanf()
#include <stdlib.h>     //for rand() function
#include <time.h>       //for time function
#include "screen.h"

// rand() function is initiated by a SEED (constant number), if we don't change it,
// everytime rand() will produce the same sequence of random numbers
// In order to get "real" randomization, you need to change the SEED
// Usually, you can you current system time to change the SEED.
int main (void)     // "void" means  this program takes no command argument
{
    printf("RAND_MAX = %d\n", RAND_MAX);
    printf("This is 100 random numbers:\n\n");
    srand(time(NULL)); // change the SEED by current time in seconds

    for(int i=0; i < 100; i++){
        printf("%4d", rand()%100);
        if((i+1)%10==0)     //To check value i, if we have printed 10 numbers in one line.
        {

            printf("\n");
        }
    }
printf("\n");
return 0;
}


