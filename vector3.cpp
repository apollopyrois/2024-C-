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

    std::vector<int> tenNumbers(10, 44);
    std::cout << "Initial Vec: ";
    DisplayVector(tenNumbers);

    //std::vector<int> tenNumbers2{2, 5, 3, 6, 6, 4, 2, 4};

    tenNumbers.push_back(55);
    std::cout << "Added to end: ";
    DisplayVector(tenNumbers);

    tenNumbers.insert(tenNumbers.cbegin(), 25);
    std::cout << "Added to end: ";
    DisplayVector(tenNumbers);

    tenNumbers.insert(tenNumbers.cbegin() + 3, 42);
    std::cout << "Added to position 4: ";
    DisplayVector(tenNumbers);

    tenNumbers.insert(tenNumbers.cend(), 3, 16);
    std::cout << "Added to end ";
    DisplayVector(tenNumbers);

    std::vector<int> sixNumbers(6, -1);
    tenNumbers.insert(tenNumbers.cbegin() + 5, sixNumbers.cbegin(), sixNumbers.cbegin() + 3);
    std::cout << "3 entries from sixNumbers added to position 6: ";
    DisplayVector(tenNumbers);

    tenNumbers.erase(tenNumbers.cbegin() + 3);
    std::cout << "Erase at position 3: ";
    DisplayVector(tenNumbers);

    tenNumbers.erase(tenNumbers.cbegin() + 3, tenNumbers.cbegin() + 5);
    std::cout << "Delete positions 4 and 5: ";
    DisplayVector(tenNumbers);

    sort(tenNumbers.begin(), tenNumbers.end());
    std::cout << "sorted vector: ";
    DisplayVector(tenNumbers);



    return 0;
}