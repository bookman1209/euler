#include <stdio.h>
int main(){
    int a,b,c,p,p_d,num,max=0,i;
    for (p=12; p<=1000; p++){
        num=0;
        p_d=(int)p/3;
        for (a=1; a<=p_d; a++){
            for (b=a+1; b<=p-1; b++){
                c=p-a-b;
                if (a*a+b*b==c*c) num+=1;
            }
        }
        if (max<num){
            max=num;
            i=p;
        }
    }
    printf("answer : %d\n", i);
    return 0;
}
