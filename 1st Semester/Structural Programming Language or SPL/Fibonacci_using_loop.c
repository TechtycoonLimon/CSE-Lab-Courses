#include<stdio.h>

int main() {
int number_of_terms, current_term = 0, next_term = 1;

printf("Enter the number of terms =");
scanf("%d", &number_of_terms);

printf("The fibonacci series: ");

printf("%d, %d, ",current_term, next_term);

for(int i=2; i<=number_of_terms; i++) {
    
    int sum = current_term + next_term;
    current_term = next_term;
    next_term = sum;
    
    
    printf("%d, ", sum);
       
}
printf("\n");
return 0;
}