#include<stdio.h>
int main(){
    int i,sum_sq=0,sq_sum=0;
    for (i=1; i<=100; i++){
        sum_sq+=(i*i);
        sq_sum+=i;
    }
    sq_sum*=sq_sum;
    printf("answer : %d\n", sq_sum-sum_sq);
    return 0;
}

