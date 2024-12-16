#include <stdio.h>

void Printstring(char arr[]);

int main() {
    char firstName[] = "Shahed Hossain";
    char lastName[] = " Limon";

    Printstring(firstName);
    Printstring(lastName);

    return 0;
}

void Printstring(char arr[]) {
    for(int i=0; arr[i] != '\0'; i++) { 
        printf("%c", arr[i]);
    }
}