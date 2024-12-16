#include<stdio.h>

int calpercentage(int physics, int math, int spl);

int main() {
int phy = 96;
int math = 98;
int spl = 93;
printf("The percentage is = %d", calpercentage(phy,math,spl));
return 0;       

}

int calpercentage(int physics, int math, int spl) {
    return (( physics + math + spl) / 3);
}