//include
#include <stdio.h>
#include <stdlib.h>

//main
int main(){
    int d,max_recur=0,want_num, recur,numerator,out,i;
    int *numers = (int *)malloc(4*sizeof(int)), size=4, num=0;
    for (d=1; d<1000; d++){
        numerator = 1;
        num = 0;
        recur = 0;
        out = 0;
        while(out==0){
            numerator %= d;
            if (numerator==0) out = 1;
            if (num==size){
                size += 4;
                numers = (int *)realloc(numers, size*sizeof(int));
            }
            numers[num] = numerator;
            for (i=0; i<num; i++){
                if (numerator == numers[i]){
                    recur = num-i;
                    out = 1;
                }
            }
            num++;
            numerator *= 10;
        };
        if (recur>max_recur){
            max_recur = recur;
            want_num = d;
        }
    }
    printf("%d", want_num);
    return 0;
}