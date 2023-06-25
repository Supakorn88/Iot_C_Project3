#include "stdio.h"

void main(){
    int i;

    for( i = 1 ; i <= 5 ; i = i + 1  ){
        if(i % 2 == 0 ){
            continue;
        }

        printf("%d)IoT\n", i);
    }
    printf("SAU\n");
}