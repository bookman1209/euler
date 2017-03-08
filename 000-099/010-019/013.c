#include <stdio.h>

//Main Function
int main(){
    FILE *fp;
    int num[100][50], sum[60]={0,}, i, j;
    fp = fopen("013data.txt", "r");
    for (i=0; i<100; i++){
        for (j=49; j>=0; j--){
            fscanf(fp, "%1d", &num[i][j]);
        }
    }
    for (i=0; i<100; i++){
        for (j=0; j<50; j++){
            sum[j]+=num[i][j];
        }
        for (j=0; j<60; j++){
            if (sum[j] >= 10){
                sum[j+1]+=1;
                sum[j]-=10;
            }
        }
    }

    for (i=59; i>=0; i--){
        if (sum[i] != 0){
            break;
        }
    }
    printf("answer : ");
    for (j=i; j>=i-9; j--){
        printf("%d", sum[j]);
    }
    fclose(fp);
    return 0;
}