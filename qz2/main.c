#include <stdio.h>

void print_spaces(int r,int row){
    for(int i=r;i<row;i++){
        printf("  ");
    }
}

void print_stars(int r){
    for(int i=0;i<r*2-1;i++){
        printf("* ");
    }
    printf("\n");
}

int main(){
    int row=5;
    for(int i=row;i>=1;i--){
        print_spaces(i,row);
        print_stars(i);
    }
    return 0;
}
