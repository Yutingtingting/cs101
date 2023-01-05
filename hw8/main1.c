#include <stdio.h>

void print_spc(int i, int n){
    for(int j=i;j<n;j++){
        printf("  ");
    }
}

void print_star(int i){
    for(int j=0;j<i*2+1;j++){
        printf("* ");
    }
}

int main(){
    int n=10;
    for(int i=0;i<=n;i++){
        print_spc(i,n);
        print_star(i);
        printf("\n");
    }
}
