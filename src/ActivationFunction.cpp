#include "../include/nnet/ActivationFunction.hpp"
#include <cmath>

float sigmoid(float x){
    return 1/(1+powf32(EULER, -x));
}

float relu(float x){
    return x > 0.0 ? x : 0;
}

float identity(float x){
    return x;
}