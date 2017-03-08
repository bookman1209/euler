#include <stdio.h>
#include <math.h>

//User Function
int phi(int n){
    int phi=n, po=0,p,b;
    do{
        po++;
        b = (int)(n/pow(2,po));
    }while (n == pow(2,po)*b);
    po--;
    if (po){
        n /= (int)(pow(2,po));
        phi = phi/2*(2-1);
    }
    for (p=3;p<=sqrt(n);p+=2){
        po = 0;
        do{
            po++;
            b = (int)(n/pow(p,po));
        }while (n == pow(p,po)*b);
        po--;
        if (po){
            n /= (int)(pow(p,po));
            phi = phi/p*(p-1);
        }
        if (n == 1) break;
    }
    if (n != 1) phi = phi/n*(n-1);
    return phi;
}

//Main Function
int main(){
    int n, max_n=0;
    float max_phi=0.0, nphin;
    for (n=4;n<=1000000;n++){
        nphin = (float)n/phi(n);
        if (max_phi < nphin){
            max_n = n;
            max_phi = nphin;
        }
    }
    printf("answer : %d\n", max_n);
    return 0;
}