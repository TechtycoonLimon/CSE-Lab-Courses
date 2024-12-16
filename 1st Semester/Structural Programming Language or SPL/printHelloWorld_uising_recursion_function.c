#include<stdio.h>
//function decleared
void printHelloworld(int count);

int main() {
    printHelloworld(5); //function call
    return 0;
}
//Recursion function definition
void printHelloworld(int count) {

      if (count == 0) {
    return;
}   

   printHelloworld(count-1);
    printf("Hello World! \n", count);

}

 
