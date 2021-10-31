/*
 * Simplest form of a random number generator 
 * Start the thing and receive a number.
 * */
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void using_rand() {
    srand(time(NULL));
    int r = rand() % 10;
    printf("random number using rand: %d\n", r);
}

int main(void) {
    using_rand();
}

