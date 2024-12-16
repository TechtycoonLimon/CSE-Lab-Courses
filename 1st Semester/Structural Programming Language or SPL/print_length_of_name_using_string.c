#include <stdio.h>
//void printString(char arrp[]);
int countLength(char arr[]);

int main() {
    char name[50];
    fgets(name, 50, stdin);
    printf("The length of the name is = %d", countLength(name));
    return 0;
}

int countLength(char arr[]) {
    int count = 0;
    for(int i=0; arr[i] !=0; i++) {
        count++;
    }
    return count-1;
    
}

//void printString(char arr[]){
    //for(int i=0; arr[i] != '\0'; i++) {
        //printf("%c", arr[i]);
    //}
//}
   