#include <iostream>
#include <string>

int main() {

    int number;
    std::string name;

    std::cout << "please enter an integer: ";
    std::cin >> number;

    std::cout << "please enter your name: ";
    //std::cin >> name;
    std::getline(std::cin >> std::ws, name);

    std::cout << "Welcome " << name << "! You entered " << number << std::endl;

    std::cout << "Sum of 5 + 5 is: " << 5 + 5 << "."
              << std::endl;  

    return 0;
}
