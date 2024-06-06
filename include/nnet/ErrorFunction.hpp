#pragma once

#include <vector>


float meanSquaredError(const std::vector<float>* pred, const std::vector<float>* actual);
float misclassificationError(const std::vector<float>* pred, const std::vector<float>* actual);
float crossEntropyError(const std::vector<float>* pred, const std::vector<float>* actual);
