#include <iostream>
#include <random>
#include <vector>
#include "include/nnet/Neuron.hpp"
#include "include/nnet/ActivationFunction.hpp"
#include "include/nnet/Layer.hpp"
#include "include/nnet/NeuralNetwork.hpp"
#include "include/nnet/ErrorFunction.hpp"


using namespace std;
int main(){
    std::vector<size_t> shape{2, 2, 1}; 
    std::vector<std::function<float (float)>> act_func{sigmoid, identity};
    NeuralNetwork nn(shape, 0.001, act_func);

    std::vector<std::vector<float>> inputs = {{0, 0}, {0, 1}, {1, 0}, {1, 1}};
    std::vector<float> outputs = {0, 1, 1, 0};
    std::vector<float> results;

    for (auto x : inputs){
        results.push_back(nn.forward(&x)->at(0));
        std::cout << results.back() << '\t';
    }
    std::cout << '\n';

    std::cout << misclassificationError(&results, &outputs) << "\n";


    return 0;
}