#include <iostream>
#include <string>
int main() {
    int *dynamicInt = new int;
    std::string *dynamicString = new std::string;
    std::cout << "Enter  integer: ";
    std::cin >> *dynamicInt;
    std::cout << "Enter string : ";
    std::cin.ignore(); 
    std::getline(std::cin, *dynamicString);
    std::cout << " Allocate an integer : " << *dynamicInt << std::endl;
    std::cout << " Allocate a string : " << *dynamicString << std::endl;
    delete dynamicInt;
    delete dynamicString;

    return 0;
}
