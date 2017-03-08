#include <stdio.h>
#include <math.h>
int num_div(int a){
    int i,num,k;
    k=sqrt(a);
    for (i=1,num=0; i<k; i++){
        if (!(a%i)) num+=1;
    }
    num*=2;
    return num;
}

int main(){
    int i,k=1;
    for (i=1;;i+=k){
        k++;
        if (num_div(i)>500) break;
    }
    printf("answer : %d\n", i);
    return 0;
}
