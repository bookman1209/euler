#include <stdio.h>
#include <math.h>

//Main Function
int main(){
    int n,m, i, num[6],po_sum, sum=0;
    for (n=2; n<1000000; n++){
        po_sum = 0;
        i = n;
        for (m=0;;m++){
            num[m] = i%10;
            i -= i%10;
            i /= 10;
            if (!i) break;
        }
        for (i=0; i<=m; i++){
            po_sum += (int)pow(num[i], 5);
        }
        if (n == po_sum){
            sum += po_sum;
        }
    }
    printf("answer : %d\n", sum);
    return 0;
}