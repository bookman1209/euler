//include
#include <stdio.h>
#include <windows.h>

//main
int main(){
    FILE *fp;
    int matrix[80][80],i,j,line;
    fp = fopen("081data.txt", "r");
    for (i=0; i<80; i++){
        for (j=0; j<80; j++){
            fscanf(fp, "%d,", &matrix[i][j]);
        }
    }
    for (line=157; line>=0; line--){
        for (i=79; i>=0; i--){
            j = line-i;
            if (j<0) continue;
            if (j>=80) break;
            if (i<79){
                if (j<79){
                    matrix[i][j] += min(matrix[i+1][j], matrix[i][j+1]);
                }
                else{
                    matrix[i][j] += matrix[i+1][j];
                }
            }
            else{
                matrix[i][j] += matrix[i][j+1];
            }
        }
    }
    printf("%d", matrix[0][0]);
    fclose(fp);
    return 0;
}