//
// Created by kirillg on 15.12.2021.
//

#include "Matrix.h"

void Matrix::setValues(const std::vector<std::vector <double>>& _value) {
    this->value = _value;
}

std::vector<std::vector <double>> Matrix::getValue() const{
    return this->value;
}

void Matrix::fill(const int& M) {
    std::vector<double> a;
    for (int i = 0; i < M; i++) {
        a.clear();
        for (int j = 0; j < M; j++)
            a.push_back(rand() % 100 + 1);
        this->value.push_back(a);
    }
}