#include <stdio.h>
int yoil(int y, int m, int d){
    int w,c,yy;
    if (m==1){
        y-=1;
        m=13;
    }
    if (m==2){
        y-=1;
        m=14;
    }
    yy=y%100;
    c=(y-yy)/100;
    w = (int)(21*c/4) + (int)(5*yy/4) + (int)(26*(m+1)/10) + d-1;
    return (w%7);
}
int main(){
    int y,m,num=0;
    for (y=1901;y<=2000;y++){
        for (m=1;m<=12;m++){
            if (!yoil(y,m,1)) num+=1;
        }
    }
    printf("answer : %d\n", num);
    return 0;
}


