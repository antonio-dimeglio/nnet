#pragma once 

#include <stdexcept>
#include <string>

class VectorSizeMismatchException : public std::runtime_error{
    public:
        VectorSizeMismatchException(): std::runtime_error("Cannot perform dot product between vectors of different sizes"){};
};

class InvalidNeuralNetworkShapeException : public std::runtime_error{
    public:
        InvalidNeuralNetworkShapeException(): std::runtime_error("Cannot create neural network with the shapes provided."){};
};

class ActivationShapeMismatchException : public std::runtime_error{
    public:
        ActivationShapeMismatchException(): std::runtime_error("Cannot create neural network with activation functions vector and shape vector with different sizes."){};
};