#include "../include/nnet/Neuron.hpp"
#include <random>

Neuron::Neuron(size_t input_size, std::function<float (float)> activation_function):
    m_weights(input_size), m_activation_function(activation_function){

    std::default_random_engine generator; 
    std::normal_distribution<float> distrib(0, 1);

    for(size_t i = 0; i < input_size; i++){
        m_weights[i] = distrib(generator);
    }

    m_bias = distrib(generator);
}

float Neuron::forward (const std::vector<float>& x){
    if (x.size() != m_weights.size()){
        throw VectorSizeMismatchException();
    }


    float sum = 0.0;
    for (int i = 0; i < x.size(); i++){
        sum += m_weights[i] * x[i];
    } 

    sum += m_bias;

    return m_activation_function(sum);
}