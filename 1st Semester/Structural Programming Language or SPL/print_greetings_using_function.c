#include<stdio.h>
void salam();
void bonjour();

int main() {
    printf("Enter B for salam & f for bonjour: ");
     char ch;
    scanf("%c",&ch);
    
   
    if (ch == 'b' || ch == 'B') { 
        salam();
    } else { 
        bonjour();
    }
    return 0;
}

void salam() {
    printf("salam <3\n");
}

void bonjour() {
    printf("bonjour\n");
}
