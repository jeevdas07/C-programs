#include <stdio.h>
int main()
{
int type, units, eligible;
float bill, pay;
printf("Enter the connection type (1-Domestic, 2-Commercial): ");
scanf("%d", &type);
printf("Enter the units consumed: ");
scanf("%d", &units);
printf("Enter the bill amount: ");
scanf("%f", &bill);
eligible = (type == 1) && (units <= 100);
pay = bill * !eligible;
printf("Subsidy eligible = %d\n", eligible);
printf("Amount to be paid = Rs. %.2f\n", pay);
return 0;
}
