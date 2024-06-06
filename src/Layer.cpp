#include "../include/nnet/Layer.hpp"

std::vector<float>* Layer::forward(std::vector<float>* x){
    for (int i = 0; i < m_neurons.size(); i++){
        m_output[i] = m_neurons[i].forward(*x);
    }

    return &m_output;
}