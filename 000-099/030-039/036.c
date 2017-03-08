#include <stdio.h>

//Main Function
int main(){
    int n,de[6], bi[20], i,j,k, sum=0, de_pal, bi_pal;
    
    for (n=1; n<1000000; n+=2){
        de_pal = 1;
        i = n;
        for (j=0;;j++){
            de[j] = i%10;
            i -= i%10;
            i /= 10;
            if (!i) break;
        }
        for (k=0; k<=(j/2); k++){
            if (de[k] != de[j-k]){
                de_pal = 0;
                break;
            }
        }
        
        if (de_pal){
            bi_pal = 1;
            i = n;
            for (j=0;;j++){
                bi[j] = i%2;
                i -= i%2;
                i /= 2;
                if (!i) break;
            }
            for (k=0; k<=(j/2); k++){
                if (bi[k] != bi[j-k]){
                    bi_pal = 0;
                    break;
                }
            }
            if (bi_pal){
                sum += n;
            }
        }
    }
    printf("answer : %d\n", sum);
    return 0;
}