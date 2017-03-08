#include <stdio.h>

//Main Function
int main(){
    int spi[1001][1001], a=500, b=500, n, c=1, i, sum=0;
    spi[a][b] = c;
    for (n=1; n<=999; n+=2){
        for (i=1; i<=n; i++){
            c += 1;
            a += 1;
            spi[a][b] = c;
        }
        for (i=1; i<=n; i++){
            c += 1;
            b += 1;
            spi[a][b] = c;
        }
        for (i=1; i<=n+1; i++){
            c += 1;
            a -= 1;
            spi[a][b] = c;
        }
        for (i=1; i<=n+1; i++){
            c += 1;
            b -= 1;
            spi[a][b] = c;
        }
    }
    for (i=1; i<=1001; i++){
        c += 1;
        a += 1;
        spi[a][b] = c;
        
    }
    for (i=0; i<1001; i++){
        sum += spi[i][i];
        sum += spi[i][1000-i];
    }
    sum -= spi[500][500];
    printf("answer : %d\n", sum);
    return 0;
}