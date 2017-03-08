#include <stdio.h>
#include <math.h>
void pf(__int64 a){
    __int64 num=a,b,p=2,po=0,max_p=2;
    for (p=3;p<=num;p+=2){
        po=0;
        do{
            po++;
            b=a/(__int64)pow(p,po);
        }while (a==(b*(__int64)pow(p,po)));
        po--;
        if (po) max_p=p;
        a=a/(__int64)pow(p,po);
        if (a==1) break;
    }
    printf("answer : %d\n", max_p);
}

int main(){
    __int64 a=600851475143;
    pf(a);
    return 0;
}

