#include <iostream>
#include <fstream>

int main() {

    std::ofstream file;
    file.open("file1.txt", std::ios::out);

    if ( file.is_open() ) {

        std::cout << " file 1 opened successfully \n";
        std::cout << " please enter some text: ";
        
        std::string data;
        std::getline(std::cin >> std::ws, data);

        file << data;

        std::cout << " file 1 will now be closed" << std::endl;
        file.close();

    }

    return 0;
}