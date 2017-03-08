#include <stdio.h>
int main(){
    FILE *fp;
    int a[20][20],i,j,max=0,temp;
    fp = fopen("011data.txt", "r");
    for (i=0;i<20;i++){
        for (j=0;j<20;j++){
            fscanf(fp, "%d", &a[i][j]);
        }
    }
    for (i=0;i<20;i++){
        for (j=0;j<17;j++){
            temp = a[i][j]*a[i][j+1]*a[i][j+2]*a[i][j+3];
            if (max<temp) max = temp;
        }
    }
    for (j=0;j<20;j++){
        for (i=0;i<17;i++){
            temp = a[i][j]*a[i+1][j]*a[i+2][j]*a[i+3][j];
            if (max<temp) max = temp;
        }
    }
    for (i=0;i<17;i++){
        for (j=0;j<17;j++){
            temp = a[i][j]*a[i+1][j+1]*a[i+2][j+2]*a[i+3][j+3];
            if (max<temp) max = temp;
        }
    }
    for (i=3;i<20;i++){
        for (j=0;j<17;j++){
            temp = a[i][j]*a[i-1][j+1]*a[i-2][j+2]*a[i-3][j+3];
            if (max<temp) max = temp;
        }       
    }
    printf("answer : %d\n", max);
    fclose(fp);
    return 0;
}

