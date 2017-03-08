//include
#include <stdio.h>
#include <math.h>

//main
int main(){
    int i=0,n=0,tmp,digit, d=1;
    while(1){
        i++;
        tmp = i;
        digit = 0;
        while (tmp/(int)pow(10,digit)!=0){
            digit++;
        };
        while (digit>0){
            n++;
            if(n==1 || n==10 || n==100 || n==1000 || n==10000 || n==100000 || n==1000000){
                d *= (tmp/(int)pow(10,digit-1));
            }
            tmp %= (int)pow(10,digit-1);
            digit--;
        };
        if (n>1000000) break;
    };
    printf("%d", d);
    return 0;
}