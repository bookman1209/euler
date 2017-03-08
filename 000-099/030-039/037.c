//include
#include <stdio.h>
#include <math.h>

//function
int is_prime(int n);
int is_truncatable(int n);

//main
int main(){
    int sum=0, count=0, n;
    for (n=11;;n+=2){
        if (is_truncatable(n)){
            sum += n;
            count++;
        }
        if (count==11) break;
    }
    printf("%d", sum);
    return 0;
}

//function def.
int is_prime(int n){
    int i,k=(int)sqrt(n);
    if (n==2 || n==3) return 1;
    if (n==1 || n%2==0) return 0;
    for (i=3; i<=k; i+=2){
        if (n%i==0) return 0;
    }
    return 1;
}
int is_truncatable(int n){
    int i,digit = 0;
    if (!is_prime(n)) return 0;
    while (n/((int)pow(10,digit))!=0){
        digit++;
    };
    for (i=1; i<digit; i++){
        if (!is_prime(n%(int)pow(10,i))) return 0;
        if (!is_prime(n/(int)pow(10,i))) return 0;
    }
    return 1;
}