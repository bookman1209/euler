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
    int n,m,i,j, ok ,count=0;
    
    for (n=2; n<1000000; n++){
        ok = 0;
        if ( isprime(n) ){
            ok = 1;
            if (n>=1) m = 0;
            if (n>=10) m = 1;
            if (n>=100) m = 2;
            if (n>=1000) m = 3;
            if (n>=10000) m = 4;
            if (n>=100000) m = 5;
            j = n;
            for (i=0; i<=m; i++){
                j += (j%10) * (int)pow(10,m+1);
                j /= 10;
                if (j == n) break;
                if ( !isprime(j) ){
                    ok = 0;
                    break;
                }
            }
        }
        if (ok) count += 1;
    }
    printf("answer : %d\n", count);
    return 0;
}