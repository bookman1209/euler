#include <stdio.h>
int main(){
    __int64 a,sq;char num[20];
    for (a=1010101010;;a++){
        sq=a*a;
        sprintf(num, "%I64d", sq);
        if ((num[0]=='1') && (num[2]=='2') && (num[4]=='3') && (num[6]=='4') && (num[8]=='5') && (num[10]=='6') && (num[12]=='7') && (num[14]=='8') && (num[16]=='9') && (num[18]=='0') && (num[19]=='\0')) break;
    }
    printf("answer : %d\n", a);
    return 0;
}