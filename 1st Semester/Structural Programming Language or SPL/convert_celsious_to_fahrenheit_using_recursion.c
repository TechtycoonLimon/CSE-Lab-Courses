#include<stdio.h>

int converttemp(float celsious);

int main() {
    float far = converttemp(32);
    printf("The far is: %f", far);
    return 0;
}

int converttemp(float celsious) {
    int far = celsious * (9.0/5.0) + 32;
    return far;
}