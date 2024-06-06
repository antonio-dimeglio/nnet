#include <iostream>
#include <random>
#include <vector>
#include "include/nnet/Neuron.hpp"
#include "include/nnet/ActivationFunction.hpp"
#include "include/nnet/Layer.hpp"
#include "include/nnet/NeuralNetwork.hpp"


using namespace std;
int main(){
    std::vector<size_t> shape{1, 2, 1}; 
    NeuralNetwork nn(shape, 0.001);

    std::vector<float> x{0.1};

    auto results = *(nn.forward(&x));

    std::cout << results[0] << "\n";

    return 0;
}