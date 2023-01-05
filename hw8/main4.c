#include <stdio.h>

int rnd_func(float f){
        return(f+=0.5);
}

int main(){
    printf("rnd_func=%d\n",rnd_func(1.4));
    printf("rnd_func=%d\n",rnd_func(2.6));
}
