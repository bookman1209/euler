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
    char n_di[7], phi_di[7];
    int n,i, need_n, count_n[10], count_phi[10], perm;
    float min_phi = 1000000.0;
    for (n=2; n<10000000; n++){
        perm = 1;
        for (i=0; i<7; i++){
            n_di[i] = 'N';
            phi_di[i] = 'N';
        }
        for (i=0; i<10; i++){
            count_n[i] = 0;
            count_phi[i] = 0;
        }
        sprintf(n_di, "%d", n);
        sprintf(phi_di, "%d", phi(n));
        for (i=0; i<7; i++){
            if (n_di[i] != 'N'){
                count_n[(int)n_di[i]-48]+=1;
            }
            if (phi_di[i] != 'N'){
                count_phi[(int)phi_di[i]-48]+=1;
            }
        }
        for (i=0; i<10; i++){
            if (count_n[i] != count_phi[i]){
                perm = 0;
                break;
            }
        }
        if (perm){
            if (min_phi > (float)n/phi(n)){
                min_phi = (float)n/phi(n);
                need_n = n;
            }
        }
    }
    printf("answer : %d\n", need_n);
    return 0;
}