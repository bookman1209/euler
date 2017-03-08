#include <stdio.h>
#include <math.h>
int main(){
    int i,st=0,p,k;
    for (p=2;;p++){
        i=2;
        if ((!(p%i)) && (p!=2)) continue;
        k=sqrt(p);
        for (i=3; i<=k; i+=2){
            if (!(p%i)) break;
        }
        if ((!(p%i)) && (p!=3)) continue;
        st++;
        if (st==10001) break;
    }
    printf("answer : %d\n", p);
    return 0;
}
