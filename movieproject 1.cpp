#include <iostream>
#include <vector>
#include <algorithm>

//movie struct definition
struct movie {
    std::string name;
    std::string director;
    int year;
    float rating;
    float price;
    int views;
    int renter;
    std::string dueDate;
};

void showMainMenu();
void addMovie(std::vector<struct movie> &movies);
void browseMovies(std::vector<struct movie> &movies);
void showMovie(std::vector<struct movie> &movies);
void changeMovie(std::vector<struct movie> &movies);
void editMovie(std::vector<struct movie> &movies);
void deleteMovie(std::vector<struct movie> &movies);
void sortMovies(std::vector<struct movie> &movies);
void searchMovie(std::vector<struct movie> &movies);
float calculateEarnings(std::vector<struct movie> &movies);
void exitProgram();

int main() {
    std::vector<struct movie> movies;
    int choice = 0;
    float total = 0.00;

    choice = 0;
    while (choice != 9)
    {
        showMainMenu();
        std::cin >> choice;

        //call function for different options
        switch(choice) 
        {
            case 1: addMovie(movies); break;
            case 2: browseMovies(movies); break;
            case 3: changeMovie(movies); break;
            case 4: deleteMovie(movies); break;
            case 6: sortMovies(movies); break;
            case 7: searchMovie(movies); break;
            case 8: total = calculateEarnings(movies); 
                    std::cout << std::endl;
                    std::cout << "Store has earned $";
                    std::cout << total; 
                    break;
            case 9: exitProgram(); break;
            default: std::cout << std::endl;
                    std::cout << "Error. Choice not found.";
        }
    }
}