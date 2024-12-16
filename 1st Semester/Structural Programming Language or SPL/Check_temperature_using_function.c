#include <stdio.h>

void temperature_check(float temperature) {
  if (temperature >= 30) {
    printf("Hot\n");
  } else if (temperature < 10) {
    printf("Cold\n");
  } else {
    printf("Pleasant\n");
  }
}

int main() {
  float temp;
  printf("Enter temperature (in Celsius): ");
  scanf("%f", &temp);

  temperature_check(temp);

  return 0;
}
