#include <stdio.h>
int main()
{
int n, first, mid, last, newnum;
printf("Enter a three digit number: ");
scanf("%d", &n);
first = n / 100;
mid = (n / 10) % 10;
last = n % 10;
newnum = last * 100 + mid * 10 + first;
printf("New number = %03d\n", newnum);
return 0;
}
