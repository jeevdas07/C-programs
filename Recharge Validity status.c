#include <stdio.h>

int main() {
    int validity, days_used;
    int active_flag, days_left;
    printf("Enter total validity days: ");
    scanf("%d", &validity);
    printf("Enter number of days used so far: ");
    scanf("%d", &days_used);
    active_flag = (days_used < validity);
    days_left = active_flag * (validity - days_used);
    printf("\nActive Flag: %d\n", active_flag);
    printf("Days Left: %d\n", days_left);

    return 0;
}


