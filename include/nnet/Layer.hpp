#pragma once
#include <vector>
#include "Neuron.hpp"
#include <string>
#include <functional>

class Layer {
    private:
    /*
        Private members
    */
        std::vector<Neuron> m_neurons;
        std::vector<float> m_output;
    
    public:
    /*
        Public members
    */
        Layer(size_t input_size, size_t layer_size, std::function<float (float)> activation_function):
            m_neurons(layer_size, Neuron(input_size, activation_function)),
            m_output(layer_size){}

    public:
    /*
        Public methods
    */
        const size_t getLayerSize() { return m_neurons.size(); };
        std::vector<float>* forward(std::vector<float>* x);
};