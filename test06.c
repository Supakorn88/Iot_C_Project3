#include "stdio.h"

void main(){
    int number;
    int i = 1;

    printf("-------------------------\n");
    printf(" Multiplication\n");
    printf("-------------------------\n");
    printf("Input number : ");
    scanf("%d",&number);
    printf("-------------------------\n");
    do{
        printf("%d x %d = %d\n",    i,number,i * number);
        i++;
    }while (i <= 12);
    printf("-------------------------\n");
}