//
// Created by kirillg on 15.12.2021.
//

#ifndef LAB_3_MATRIX_H
#define LAB_3_MATRIX_H


#include <vector>
#include <cstdlib>

class Matrix {
private:
    std::vector<std::vector <double>> value;
public:
    void fill(const int& M);
    void setValues(const std::vector<std::vector <double>>& value);
    std::vector<std::vector <double>> getValue() const;

};


#endif //LAB_3_MATRIX_H
