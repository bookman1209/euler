#include <stdio.h>

//Main Function
int main(){
    int n,m,l, count_n=0;
    
    for (n=2; n<=10000000; n++){
        m = n;
        while(1){
            l = 0;
            for (;m>0; m/=10)
                l += ((m%10) * (m%10));
            if (l == 1) break;
            if (l == 89){
                count_n += 1;
                break;
            }
            m = l;
        }
    }
    printf("answer : %d\n", count_n);
    return 0;
}