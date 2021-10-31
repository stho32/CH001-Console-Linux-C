/*
 * Simplest form of a random number generator 
 * Start the thing and receive a number.
 * */
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void) {
    srand(time(NULL));
    int randomNumber = rand() % 10;
    printf("random number using rand: %d\n", randomNumber);
    return 0;
}

