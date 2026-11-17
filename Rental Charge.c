#include <stdio.h>
int main() {
    int minutes;
    int charge = 0;
    printf("Enter the rental time in minutes: ");
    if (scanf("%d", &minutes) != 1 || minutes < 0) {
        printf("Invalid input. Please enter a valid number of minutes.\n");
        return 1;
    }
    if (minutes <= 30) {
        charge = 0;
    } else if (minutes <= 60) {
        charge = 10;
    } else {
        int additional_minutes = minutes - 60;
        int blocks = (additional_minutes + 29) / 30;
        charge = 10 + (blocks * 15);
    }
    printf("Total rental charge: Rs. %d\n", charge);
    return 0;
}
