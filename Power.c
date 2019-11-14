#include <stdio.h>
#include "myMath.h"

float expo (int x){
    float result= 1;
    double e= 2.7182;
    for (int i=0; i<x; i++){
        result= result * e;
    }
    return result;
}

float power (double x, int y){
    float result= 1;
    for (int i=0; i<y; i++){
        result= result * x;
    }
    return result;
}