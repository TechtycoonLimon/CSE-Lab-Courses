#include<stdio.h>
int main() {
    int nid[5];
    
    //input
    for (int i = 0; i < 5; i++) {
       printf("%d index = ", i);
        scanf("%d", &nid[i]);
    }
//output
for(int i = 0; i < 5; i++) {
printf("%d index = %d\n", i, nid[i]);
}
return 0;
}