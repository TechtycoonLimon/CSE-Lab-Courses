#include<stdio.h>
#include<string.h>
//Structure decleared
struct address {
    int houseNo;
    int block;
    char city[100];
    char state[100];
};

//Structured variable function decleared to print the addresses.
void printAddress(struct address add);

int main() {
    //sturctured array
    struct address adds[5];
    //input
    printf("Enter the 1 person info:");
    scanf("%d", &adds[0].houseNo);
    scanf("%d", &adds[0].block);
    scanf("%s", adds[0].city);
    scanf("%s", adds[0].state);

    printf("Enter the 2 person info:");
    scanf("%d", &adds[1].houseNo);
    scanf("%d", &adds[1].block);
    scanf("%s", adds[1].city);
    scanf("%s", adds[1].state);

    printf("Enter the 3 person info:");
    scanf("%d", &adds[2].houseNo);
    scanf("%d", &adds[2].block);
    scanf("%s", adds[2].city);
    scanf("%s", adds[2].state);

    printf("Enter the 4 person info:");
    scanf("%d", &adds[3].houseNo);
    scanf("%d", &adds[3].block);
    scanf("%s", adds[3].city);
    scanf("%s", adds[3].state);

    printAddress(adds[0]);
    printAddress(adds[1]);
    printAddress(adds[2]);
    printAddress(adds[3]);

    return 0;


}

void printAddress(struct address add) {
    printf("Address is: %d, %d, %s, %s \n", add.houseNo, add.block, add.city, add.state);
}