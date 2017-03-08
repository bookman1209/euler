//include
#include <stdio.h>
#include <math.h>


//main
int main(){
    __int64 hexa,tri_D,penta_D,sq_tri_D,sq_penta_D;
    int n;
    for (n=144; ; n++){
        hexa = n*(2*n-1);
        tri_D = 1+8*hexa;
        penta_D = 1+24*hexa;
        sq_tri_D = (int)sqrt(tri_D);
        sq_penta_D = (int)sqrt(penta_D);
        if ((sq_tri_D*sq_tri_D == tri_D) && (-1+sq_tri_D)%2==0 && (sq_penta_D*sq_penta_D==penta_D) && (1+sq_penta_D)%6==0) break;
    }
    printf("%I64d", hexa);
    return 0;
}