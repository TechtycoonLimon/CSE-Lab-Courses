// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>
#include<ctype.h>

int countVowels(char str[]);


int main() {
    char str[] = "Helloworld";
    printf("The vowles are: %d", countVowels(str));
}

int countVowels(char str[]) {
    int count=0;
    for (int i=0; str[i] != '\0'; i++){
        str[i] = tolower(str[i]);
        if (str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u') {
            count++;
            
        }
    }
return count;
}