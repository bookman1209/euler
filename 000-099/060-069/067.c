#include <stdio.h>
#include <windows.h>


//Main Function
int main(){
    FILE *fp;
    fp = fopen("067data.txt", "r");
    int a[100][100], i,j;
    for (i=0; i<100; i++){
        for (j=0; j<=i; j++){
            fscanf(fp, "%d", &a[i][j]);
        }
    }
    for (i=99; i>=0; i--){
        for (j=0; j<i; j++){
            a[i-1][j] += max(a[i][j], a[i][j+1]);
        }
    }
    printf("answer : %d\n", a[0][0]);
    fclose(fp);
    return 0;
}