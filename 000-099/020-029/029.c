//include
#include <stdio.h>
#include <math.h>

//main
int main(){
    int a,b,i, index=0;
    double value, values[9801]={0,};
    for (a=2; a<=100; a++){
        for (b=2; b<=100; b++){
            value = b*log(a);
            for (i=0; i<=index-1; i++){
                if (values[i]==value) break;
            }
            if (i==index){
                values[index] = value;
                index++;
            }
        }
    }
    printf("%d", index);
    return 0;
}