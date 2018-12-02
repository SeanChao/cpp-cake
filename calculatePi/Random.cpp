//
// Created by SeanC on 2018/11/27.
//
#include <cstdlib>
#include <ctime>
#include "Random.h"

void randomInit(){
    srand(time(NULL));
}

int randomInteger(int low, int high){
    return (low+(high-low+1)*rand()/(RAND_MAX+1));
}

double randomDouble(double low, double high){
    double d = (double)rand()/(RAND_MAX+1);
    return (low+(high-low)*d);
}
