#include <stdio.h>

int main() {
    int n;
    float outputs[20];
    float max1, max2;
    printf("Enter the number of panels (up to 20): ");
    scanf("%d", &n);
    if (n < 2) {
        printf("You need at least 2 panels to find the highest and second highest.\n");
        return 1;
    }
    printf("Enter the daily output (kWh) for each panel:\n");
    for (int i = 0; i < n; i++) {
        printf("Panel %d: ", i + 1);
        scanf("%f", &outputs[i]);
    }
    if (outputs[0] > outputs[1]) {
        max1 = outputs[0];
        max2 = outputs[1];
    } else {
        max1 = outputs[1];
        max2 = outputs[0];
    }
    for (int i = 2; i < n; i++) {
        if (outputs[i] > max1) {
            max2 = max1;
            max1 = outputs[i];
        } else if (outputs[i] > max2) {
            max2 = outputs[i];
        }
    }
    printf("\nHighest output: %.2f kWh\n", max1);
    printf("Second highest output: %.2f kWh\n", max2);
    return 0;
}

