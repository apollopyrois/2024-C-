#include <iostream>
#include <fstream>

int main() {
    std::ifstream file;
    file.open("file1.txt", std::ios::in);

    if ( file.is_open() ) {
        std::cout << "file1.txt opened successfully \n";

        std::string content;
        while( file.good() ) {
            getline(file, content);
            std::cout << content << std::endl;
        }
        std::cout << "file1.txt will now be closed" << std::endl;
        file.close();

    } else {
        std::cout << "file cannot be opened!" << std::endl;
    }
    return 0;
}
