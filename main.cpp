#include <iostream>
#include <string>
#include "Matrix.h"
#include <thread>
int main() {
    srand(time(0));
    Matrix A;
    //A.fill(3);
    std::thread t([](Matrix E, int n){
        E.fill(n);
        }, std::ref(A), 3);
    t.join();
    std::cout << A.getValue().size() << std::endl;
    return 0;
}
