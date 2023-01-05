#include <stdio.h>

int main(){
    int n=255;
    int k;
    int count=0;
    for(int c=31;c>=0;c--){
        k=n>>c;
        if(k&1){
            printf("1");
        }
        else{
            printf("0");
        }
        if(c%4==0){
            printf(" ");
        }
    }
}

