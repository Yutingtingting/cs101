#include <stdio.h>

int main(){
    double pi=4.0;
    int flag=1;
    long ppi=0;
    int x=0;
    for(int i=3;i<=1000000;i+=2){
        if (flag==0){
            pi+=(4.0/i);
            flag++;
        }
        else{
            pi-=(4.0/i);
            flag--;
        
        }
        ppi=pi*100000;
        if(ppi==314159){
            x=i;
            break;
        }
    }
    printf("%d\n",x);
    printf("%.5f",pi);
    return 0;
}
