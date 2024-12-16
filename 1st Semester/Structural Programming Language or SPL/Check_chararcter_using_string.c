


#include <stdio.h>

void checkchar(char str[], char ch);


int main() {
    char str[] = "HellowOrld";
    char ch = 'e';
    checkchar(str, ch);
}
 void checkchar(char str[], char ch) {
     for(int i=0; str[i] != '\0'; i++) {
         if (str[i] == ch) {
             printf("The character is present");
             return;
         }
     }
     printf("The character is not present :(");
 }