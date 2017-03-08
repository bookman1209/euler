#include <stdio.h>
int main(){
    int i;
    for (i=1;;i++){
        if (i%16==0 && i%9==0 && i%5==0 && i%7==0 && i%11==0 && i%13==0 && i%17==0 && i%19==0) break;
    }
    printf("answer : %d\n", i);
    return 0;
}