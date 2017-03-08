#include <stdio.h>
int main(){
    int a[350],i,j,sum=0;
    for (i=0;i<350;i++){
        a[i]=0;
    }
    a[0]=1;
    for (i=1;i<=1000;i++){
        for (j=0;j<350;j++){
            a[j]*=2;
        }
        for (j=0;j<350;j++){
            if (a[j]>=10){
                a[j]-=10;
                a[j+1]+=1;
            }
        }
    }
    for (i=0;i<350;i++){
        sum+=a[i];
    }
    printf("answer : %d\n", sum);
    return 0;
}
