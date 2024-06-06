#pragma once
#include <vector>

#include "Layer.hpp"
#include "ActivationFunction.hpp"
#include "Exceptions.hpp"

class NeuralNetwork{
    private:
    /*
        Private members
    */
        std::vector<Layer> m_layers;
        float m_alpha;

    public:
    /*
        Public methods
    */
        // The shape vector represents the size of each layers, for example, given
        // an input of size 1024, two hidden layers (512, 256) and an output layer of size 10
        // the vector would be [1024, 512, 256, 10]
        NeuralNetwork(std::vector<size_t> shape, 
            float alpha, 
            std::function<float (float)> activation_function = identity);


        std::vector<float>* forward(std::vector<float>* x);
};