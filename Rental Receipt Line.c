#include <stdio.h>
#include <string.h>
int main(){
char name[15];
char ID[10];
char combined[50];
printf("Enter Name: ");
scanf("%s",name);
printf("Enter ID: ");
scanf("%s",ID);
strcat(ID, " ");
strcat(ID, name);
strcpy(combined, ID);
printf("Bicycle ID rented by name: %s\n",combined);
if(strncmp(ID, "EB", 2)==0){
    printf("Electric Bicycle");
}else if(strncmp(ID, "BC", 2)==0){
    printf("Regular Bicycle");
}else{
    printf("Unknown type");
}
return 0;
}

