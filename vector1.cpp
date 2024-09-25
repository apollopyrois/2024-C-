#include <iostream>
#include <vector>

int main () {

    std::vector<int> integers;

    //initalize a vector of 10 integers
    std::vector<int> tenNumbers(10);
    std::vector<int> tenNumbers2(10, 55);

    std::vector<int> copiedVector(tenNumbers2);
    std::vector<int> partialCopy(
        tenNumbers2.cbegin() + 4, tenNumbers2.cbegin() + 5
    );

    std::cout << "TenNumbers2 position 3 has this value: " << tenNumbers2[3] <<std::endl;


    return 0;
}