#include <stdio.h>
int main(){
    int i,j,k,max=0,n;char num[7];
    for (i=100; i<1000; i++){
        for (j=100; j<1000; j++){
            sprintf(num, "%d", i*j);
            for (n=0; n<7; n++){
                if (num[n]=='\0') break;
            }
            for (k=0; k<=(n/2)-1; k++){
                if (num[k]!=num[n-k-1]) break;
                if (k==(n/2)-1){
                    if (max<(i*j)) max=(i*j);
                }
            }
        }
    }
    printf("answer : %d\n", max);
    return 0;
}

