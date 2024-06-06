#pragma once 

#include <vector>
#include <functional>
#include "Exceptions.hpp"

class Neuron{
    private:
    /*  
        Private attributes
    */
        std::vector<float> m_weights;
        float m_bias;
        std::function<float (float)> m_activation_function;

    public:
    /*
        Constructors
    */
        Neuron(size_t input_size, std::function<float (float)> activation_function);

    public:
    /*
        Public methods
    */
        float forward(const std::vector<float>& x);

    /*
        Getters
    */
        const std::vector<float> getWeights() { return m_weights; };
        const float getBias() { return m_bias; };
};