#include <iostream>
#include <vector>

void DisplayVector( const std::vector<int>& vec) {
    for ( auto element = vec.cbegin(); element != vec.end(); ++ element) {
        std::cout << *element << " ";
    }
    std::cout << std::endl;
}

//to eliminate the auto warning for the mac (under c++11), recall
//the last command and modify vector2.cpp -o into vector2.cpp -std=c++17

int main () {
    std::vector<int> tenNumbers(10,44);
    DisplayVector(tenNumbers);

    tenNumbers.push_back(55);
    DisplayVector(tenNumbers);

    tenNumbers.push_back(-1);
    DisplayVector(tenNumbers);

    return 0;
}