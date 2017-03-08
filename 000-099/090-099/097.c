//include
#include <stdio.h>

//main
int main(){
    int digit[10]={0,}, i,j;
    digit[0] = 1;
    for (i=1; i<=7830457; i++){
        for (j=0; j<10; j++){
            digit[j] *= 2;
        }
        for (j=0; j<10; j++){
            if (j!=9) digit[j+1] += digit[j]/10;
            digit[j] %= 10;
        }
    }
    for (j=0; j<10; j++){
        digit[j] *= 28433;
    }
    for (j=0; j<10; j++){
        if (j!=9) digit[j+1] += digit[j]/10;
        digit[j] %= 10;
    }
    digit[0] += 1;
    if (digit[0]>=10){
        for (j=0; j<10; j++){
            if (j!=9) digit[j+1] += digit[j]/10;
            digit[j] %= 10;
        }
    }
    for (j=9; j>=0; j--){
        printf("%d", digit[j]);
    }
    return 0;
}