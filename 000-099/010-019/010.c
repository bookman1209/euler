#include <stdio.h>
#include <math.h>
int prime(int a){
    int i=2,k;
    if (!(a%i) && (a!=2)) return 0;
    k=sqrt(a);
    for (i=3; i<=k; i+=2){
        if (!(a%i)) return 0;
    }
    return 1;
}

int main(){
    int a; __int64 sum=0;
    for (a=2; a<2000000; a++){
        if (prime(a)) sum+=a;
    }
    printf("answer : %I64d\n", sum);
    return 0;
}

