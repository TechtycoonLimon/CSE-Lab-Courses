#include <stdio.h>

int sum_of_digits(int num);

int main() {
  int number;
  printf("Enter a number: ");
  scanf("%d", &number);

  int sum = sum_of_digits(number);//function call
  printf("Sum of digits of %d is %d\n", number, sum);

  return 0;
}

int sum_of_digits(int num) {
  int sum = 0;
  while (num != 0) {
    sum += num % 10;
    num /= 10;
  }
  return sum;
}
