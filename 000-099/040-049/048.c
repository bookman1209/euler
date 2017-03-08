#include <stdio.h>

//Main Function
int main(){
    int sum[10]={0,}, po[10], i, j, k;
    
    for (i=1; i<=1000; i++){
        po[0] = 1;
        for (j=1; j<10; j++){
            po[j] = 0;
        }
        //i^i 마지막 10자리 구하기
        for (j=1; j<=i; j++){
            for (k=0; k<10; k++){
                po[k] *= i;
            }
            for (k=0; k<9; k++){
                if (po[k] >= 10){
                    po[k+1] += po[k]/10;
                    po[k] %= 10;
                }
            }
            po[9] %= 10;
        }
        //i^i 마지막 10자리 po변수안에 저장.
        for (k=0; k<10; k++){
            sum[k] += po[k];
        }
        for (k=0; k<9; k++){
            if (sum[k] >= 10){
                sum[k+1] += sum[k]/10;
                sum[k] %= 10;
            }
        }
        sum[9] %= 10;
    }
    printf("answer : ");
    for (i=9; i>=0; i--){
        printf("%d", sum[i]);
    }
    return 0;
}