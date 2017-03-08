#include<stdio.h>
int fac(int a){
    int i,sum=0;
    for (i=1; i<=a; i++){
        if(!(a%i)) sum+=i;
    }
    return sum-a;
}

int main(){
    int a,b,sum_t=0;
    for (a=1; a<=10000; a++){
        b=fac(a);
        if((a==fac(b)) && (a<b)) {sum_t+=a;sum_t+=b;}
    }
    printf("answer : %d\n", sum_t);
    return 0;
}

