#include "../include/nnet/NeuralNetwork.hpp"

NeuralNetwork::NeuralNetwork(std::vector<size_t> shape, 
float alpha, 
std::vector<std::function<float (float)>> activation_functions) : 
    m_alpha(alpha){
    if (shape.size() < 2){
        throw InvalidNeuralNetworkShapeException();
    }

    for (int i = 1; i < shape.size(); i++){
        m_layers.push_back(
            Layer(shape[i-1], shape[i], activation_functions[i-i])
        );
    }
}


std::vector<float>* NeuralNetwork::forward(std::vector<float>* x){
    for (int i = 0; i < m_layers.size(); i++){
        x = m_layers[i].forward(x);
    }

    return x;
} 