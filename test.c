#include <stdio.h>

int main(void) {
    // Variable to hold the cycle counter value.
    unsigned long long cycle;

    // The 'rdcycle' instruction reads the cycle counter.
    // This inline assembly puts the result into the variable 'cycle'.
    asm volatile ("rdcycle %0" : "=r" (cycle));

    // Print the value of the cycle counter.
    printf("Cycle counter: %llu\n", cycle);

    return 0;
}

