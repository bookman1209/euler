#include <stdio.h>
#include <math.h>
int prime(int a){
    int i=2,k;  
    if (!(a%i) && (a!=2)) return 0;
    k=sqrt(a); 
    for (i=3; i<=k; i+=2){
        if (!(a%i)) return 0;
    }
    return 1;
}

int main(){
    int a,p_list[78498],j,i=0,sum,max=0,max_sum=0;
    for (a=2;a<=1000000;a++){
        if (prime(a)){
            p_list[i]=a;
            i++;
        }                     
    }
    for (j=0;j<78498;j++){
        sum=0;
        for(i=0;;i++){
            sum+=p_list[j+i];
            if (sum>1000000) break;
        }
        sum-=p_list[i+j];
        if (prime(sum)){
            if (max<i){
                max=i+1;
                max_sum=sum;
            }
        }
    }
    printf("answer : %d\n", max_sum);
    return 0;
}

