#include<stdio.h>
#include<string.h>

void Salting(char password[]);

int main() {
    char password[100];
    scanf("%s", password);
    Salting(password);

    
    return 0;

    
}

void Salting(char password[]) {
    char salt[] = "123";
    char newpass[200];

    strcpy(newpass,password);
    strcat(newpass,salt);

    puts(newpass); 

}