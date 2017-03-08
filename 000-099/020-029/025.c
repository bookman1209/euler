#include <stdio.h>

//Main Function
int main(){
    int num[2][1000], n=2, i;
    for (i=0; i<1000; i++){
        num[0][i] = 0;
        num[1][i] = 0;
    }
    num[0][0] = 1;
    num[1][0] = 1;
    for (;;){
        n++;
        for (i=0; i<1000; i++){
            num[0][i] += num[1][i];
            if (num[0][i] >=10){
                num[0][i] -= 10;
                num[0][i+1] += 1;
            }
        }
        if (num[0][999]){
            break;
        }
        n++;
        for (i=0; i<1000; i++){
            num[1][i] += num[0][i];
            if (num[1][i] >=10){
                num[1][i] -= 10;
                num[1][i+1] += 1;
            }
        }
        if (num[1][999]){
            break;
        }
    }
    printf("answer : %d\n", n);
    return 0;
}