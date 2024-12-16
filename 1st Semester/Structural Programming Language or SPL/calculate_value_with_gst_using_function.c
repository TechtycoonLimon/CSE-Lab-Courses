#include<stdio.h>
//function decleared
void calculateprice(float value);

int main() {
    float value;
    printf("Enter the value: ");
    scanf("%f", &value);
//function call
    calculateprice(value); //Argument/actual parameter
    printf("The original value is: %f\n", value);
    return 0;
}

//function definiton
void calculateprice(float value){
    value = value + (value*0.18);
    printf("The final price with gst: %f \n", value);
}