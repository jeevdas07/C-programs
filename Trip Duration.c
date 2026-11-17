#include <stdio.h>
int main()
{
int sh, sm, eh, em, start, end, diff, hours, minutes;
printf("Enter the start time (hours minutes): ");
scanf("%d %d", &sh, &sm);
printf("Enter the end time (hours minutes): ");
scanf("%d %d", &eh, &em);
start = sh * 60 + sm;
end = eh * 60 + em;
diff = end - start;
hours = diff / 60;
minutes = diff % 60;
printf("Trip duration = %d hours %d minutes\n", hours, minutes);
return 0;
}
