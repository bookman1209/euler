#include <stdio.h>

int count(__int64 n){
    int x=1; 
    for (;;){
        if (n==1) 
            return x;
        else if((n%2)==0){
            n=n/2;
            x+=1; 
        }
        else{
            n=3*n+1;
            x+=1; 
        }
    }
}
int main(){
    int max=1,result,x;__int64 i; 
    for(i=1;i<1000000;i++){  
        x=count(i); 
        if(max<x){
            max=x;
            result=i;
        }
    }
    printf("가장 큰 값을 갖게되는 초기 항 : %d\n", result);
    return 0;
}