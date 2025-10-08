#include<stdio.h>
#include<string.h>
int main() {
char Destination[50] = " Hello ";
char source[] = " World ";
strcat(Destination, source);
printf("Concatenated string: %s\n",Destination);
return 0;
}


