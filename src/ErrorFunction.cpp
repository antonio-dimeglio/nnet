#include "../include/nnet/ErrorFunction.hpp"
#include "cmath"

float meanSquaredError(const std::vector<float>* pred, const std::vector<float>* actual){
    float error = 0.0;
    for (int i = 0; i < pred->size(); i++){
        error += pred - actual;
    }

    return error / pred->size();
}

float misclassificationError(const std::vector<float>* pred, const std::vector<float>* actual){
    int count = 0;
    for (int i = 0; i < pred->size(); i++){
        if (int(pred->at(i)) != int(actual->at(i))){
            count++;
        }
    }

    return count / pred->size();
}

float crossEntropyError(const std::vector<float>* pred, const std::vector<float>* actual){
    float totalError = 0.0;

    for (size_t i = 0; i < pred->size(); ++i) {
        totalError += actual->at(i) * log(pred->at(i)) + (1 - actual->at(i)) * log(1 - pred->at(i));
    }
    
    return -totalError / pred->size();
}
