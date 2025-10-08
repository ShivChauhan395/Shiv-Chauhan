#include <stdio.h>
#include <ctype.h>  
void toLowerCase(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        str[i] = tolower(str[i]);
        i++;
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 
    toLowerCase(str);
    printf("The string in lowercase: %s\n", str);

    return 0;
}

