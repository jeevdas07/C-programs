#include <stdio.h>
int main() {
    int n, arr[20];
    int total_sum = 0, left_sum = 0;
    int found = 0;
    printf("Enter number of elements (up to 20): ");
    scanf("%d", &n);
    if (n < 1 || n > 20) {
        printf("Invalid size. Please enter a number between 1 and 20.\n");
        return 1;
    }
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        total_sum += arr[i];
    }
    for (int i = 0; i < n; i++) {
        total_sum -= arr[i];
        if (left_sum == total_sum) {
            printf("%d\n", i);
            found = 1;
            break;
        }
        left_sum += arr[i];
    }
    if (!found) {
        printf("No equilibrium index\n");
    }
    return 0;
}
