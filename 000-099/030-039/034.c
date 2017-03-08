#include <stdio.h>

//User Function
int fac(int n){
    int fac=1, i;
    for (i=1; i<=n; i++){
        fac *= i;
    }
    return fac;
}

//Main Function
int main(){
    int n,m, i, num[7], sum=0, sum_fac;
    for (n=3; n<10000000; n++){
        sum_fac = 0;
        i = n;
        for (m=0;;m++){
            num[m] = i%10;
            i -= i%10;
            i /= 10;
            if (!i) break;
        }
        for (i=0; i<=m; i++){
            sum_fac += fac(num[i]);
        }
        if (n == sum_fac) sum += sum_fac;
    }
    printf("answer : %d\n", sum);
    return 0;
}