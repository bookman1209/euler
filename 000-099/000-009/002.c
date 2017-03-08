#include <stdio.h>
int main(){
    int a1=1,a2=2,a3,sum=2;
    for(;a3<=4000000;){
        a3=a1+a2;
        if (!(a3%2)) sum+=a3;
        a1=a2;
        a2=a3;
    }
    printf("answer : %d\n", sum);
    return 0;
}

