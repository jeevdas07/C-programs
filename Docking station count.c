#include <stdio.h>

int main() {
    int available = 20; 
    int taken_out, returned;
    printf("Starting with %d bicycles.\n\n", available);
    for (int hour = 1; hour <= 10; hour++) {
        printf("Hour %d - Enter bicycles taken out and returned: ", hour);
        scanf("%d %d", &taken_out, &returned);
        available = available - taken_out + returned;
        printf("-> Bicycles available at the end of Hour %d: %d\n\n", hour, available);
    }

    return 0;
}

