#include <stdio.h>

//Main Function
int main(){
    int n,i, di_one[9] = {3,3,5,4,4,3,5,5,4}, //one, two, three, ... eight, nine
        di_teen[10]={3,6,6,8,8,7,7,9,8,8}, //ten, eleven, twelve, ... eighteen, nineteen
        di_tenth[8]={6,6,5,5,5,7,6,6},   //twenty, thirty, ..., eighty, ninety
        count = 0;
    for (n=1; n<=999; n++){
        if (n>=100){
            count += di_one[ (n/100 - 1) ]; //one, two, ... eight, nine
            count += 7; //hundred
            if (n%100){
                count += 3;  //and
            }
        }
        i = (n%100 - n%10) / 10; //n의 10의 자리
        if (i == 1){
            count += di_teen[ (n%10) ];
        }
        else if (i){
            count += di_tenth[ (i-2) ];
        }
        if ((n%10) && (i != 1)){
            count += di_one[ (n%10 - 1) ];
        }
    }
    count += 11;
    printf("answer : %d\n", count);
    return 0;
}