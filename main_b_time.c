#include <stdio.h>
#include <stdlib.h>
#include "mylib/mylib.h"
#include "mylib/func.time.h"

int main(void){
    int parameter = 1000;
    
    int* M = (int*) malloc(parameter * parameter * sizeof(int));
    int* v = (int*) malloc(parameter * sizeof(int));
    int* x = (int*) malloc(parameter * sizeof(int));

    printf("parameter: %d\n", parameter);
    printf("time: %fs\n", getDuration(matrixVecMul, M, v, x, parameter));
    
    free(M);
    free(v);
    free(x);

    return 0;
}