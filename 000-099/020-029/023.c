//include
#include <stdio.h>
#include <math.h>

//function dec.
int is_abundant(int n);

//main
int main(){
    int abun[6965],num[28124],sum=0, i,j;
    for (i=1; i<=28123; i++){
        num[i] = 1;
    }
    j = 0;
    for (i=1; i<=28123; i++){
        if (is_abundant(i)){
            abun[j] = i;
            j++;
        }
    }
    for (i=0; i<6965; i++){
        for (j=0; j<6965; j++){
            if (abun[i]+abun[j]<=28123){
                num[abun[i]+abun[j]] = 0;
            }
        }
    }
    for (i=1; i<=28123; i++){
        if (num[i]==1) sum += i;
    }
    printf("%d", sum);
    return 0;
}

//function def.
int is_abundant(int n){
    int i,k=(int)sqrt(n),sum=0;
    for (i=1; i<=k; i++){
        if (n%i==0){
            sum += i;
            if (i!=1 && i*i!=n){
                sum += n/i;
            }
        }
    }
    if(sum>n){
        return 1;
    }
    else{
        return 0;
    }
}