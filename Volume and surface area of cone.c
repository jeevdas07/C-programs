#include <stdio.h>
#define PI 3.14
#include <math.h>
int main(){
int r, h;
float sh, v, csa;
printf("Enter radius of cone: ");
scanf("%d",&r);
printf("Enter height of cone: ");
scanf("%d",&h);
sh= sqrt((r*r)+(h*h));
v=((1/3.0)*PI*r*r*h);
csa= PI*r*sh;
printf("The slant height is %.3f, the volume is %.3f and the curved surface area is %.3f",sh,v,csa);
return 0;
}
