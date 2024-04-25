#include <iostream>
int main() {
    int userInput;
    std::cout << "Please enter an integer value between 5 and 10: ";
    while (true) {
    std::cin >> userInput;
    if (userInput >= 5 && userInput <= 10) {
    break; 
    } else {
    std::cout << "Invalid input. Please enter an integer value between 5 and 10: ";
     }
    }
    std::cout << "Your input value " << userInput << " has been accepted." << std::endl;
    return 0;
}
