#include <stdio.h>
int main(){
    int i,sum=0;
    for (i=3; i<1000; i++){
        if (((i%3)==0) || ((i%5)==0)) sum+=i;
    }
    printf("answer : %d\n", sum);
    return 0;
}

