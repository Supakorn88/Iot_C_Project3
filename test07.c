#include "stdio.h"
void main(){
    int number,i;
    printf("-------------------------\n");
    printf("Multiplication\n");
    printf("Input number : ");
    scanf("%d",&number);
    for(i = 1; i <= 12; i++)
    {
        printf("%d x %d = %d\n",number,i,i*number);
        printf("-------------------------\n");
    }
}