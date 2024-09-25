#include <iostream>
#include <vector>
#include <algorithm>

void DisplayVector( const std::vector<int>& vec) {
    for ( auto element = vec.cbegin(); element != vec.end(); ++ element) {
        std::cout << *element << " ";
    }
    std::cout << std::endl;
}

int main () {

    std::vector<int> tenNumbers;
    for(int i=0; i < 10; i++) {
        tenNumbers.push_back(i+1);
    }
    std::cout << "Inital Vec: ";
    DisplayVector(tenNumbers);

    std::cout << "Test: " << tenNumbers[6] << std::endl;
}