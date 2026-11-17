#include <stdio.h>
#include <string.h>

#define MAX_STATIONS 20
#define MAX_NAME_LEN 50

int main() {
    int n;
    char distinct_stations[MAX_STATIONS][MAX_NAME_LEN];
    int visit_counts[MAX_STATIONS] = {0};
    int unique_count = 0;
    printf("Enter the total number of bicycle pickups (up to 20): ");
    if (scanf("%d", &n) != 1 || n < 1 || n > MAX_STATIONS) {
        printf("Invalid input. Please enter a number between 1 and 20.\n");
        return 1;
    }
    printf("Enter the names of the stations (one word each):\n");
    for (int i = 0; i < n; i++) {
        char current_station[MAX_NAME_LEN];
        scanf("%s", current_station);
        int found = 0;
        for (int j = 0; j < unique_count; j++) {
            if (strcmp(distinct_stations[j], current_station) == 0) {
                visit_counts[j]++;
                found = 1;
                break;
            }
        }
        if (!found) {
            strcpy(distinct_stations[unique_count], current_station);
            visit_counts[unique_count] = 1;
            unique_count++;
        }
    }
    int max_index = 0;
    for (int i = 1; i < unique_count; i++) {
        if (visit_counts[i] > visit_counts[max_index]) {
            max_index = i;
        }
    }
    printf("\n--- Summary of Visits ---\n");
    for (int i = 0; i < unique_count; i++) {
        printf("%s: %d visit(s)\n", distinct_stations[i], visit_counts[i]);
    }
    printf("\nStation visited most often: %s (%d visits)\n",
           distinct_stations[max_index], visit_counts[max_index]);
    return 0;
}
