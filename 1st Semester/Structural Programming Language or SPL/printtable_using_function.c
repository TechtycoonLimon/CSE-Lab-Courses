#include<stdio.h>
//function decleared
void printtable(int n);

// main function
int main() {
    int n;
    printf("enter the number of n: ");
    scanf("%d",&n);
     // Function call
     printtable(n); // Actual parameter/Argument
     return 0;

}
// This is called function definition
 void printtable(int n){ // parameter/formal parameter
    for (int i=1; i<=10; i++) 
       printf("%d \n", i*n); 
       

 }
