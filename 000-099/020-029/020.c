#include <stdio.h>
int main(){
    int a[200],i,j,sum=0;
    for (i=0;i<200;i++){
    a[i]=0;
    }
    a[0]=1;
    for (i=1;i<=100;i++){
        for (j=0;j<200;j++){
            a[j]*=i;
        }
        for (j=0;j<199;j++){
            if (a[j]>=10){
                a[j+1]+=((int)(a[j]/10));
                a[j]=a[j]%10;
            }
        }
    }
    for (i=0;i<200;i++){
        sum+=a[i];
    }
    printf("answer : %d\n", sum);
    return 0;
}
