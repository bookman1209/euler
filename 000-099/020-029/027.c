#include <stdio.h>
#include <math.h>


//User Function
int isprime(int a){
    int i=2, k;
    if (a == 1) return 0;
    if (!(a%i) && (a!=2)) return 0; 
    k = (int)sqrt(a);
    for (i=3; i<=k; i+=2){
        if (!(a%i)) return 0;
    }
    return 1;
}

//Main Function
int main(){
    int n,a,b, max_n=0, need_a=0, need_b=0;
    for (a=-999; a<1000; a++){
        for (b=3; b<1000; b++){
            for (n=0;;n++){
                if (!isprime(n*n+a*n+b) || n*n+a*n+b<=0) break;
            }
            if (n>max_n){
                max_n = n;
                need_a = a;
                need_b = b;
            }
        }
    }
    printf("answer: %d\n", need_a*need_b);
    return 0;
}