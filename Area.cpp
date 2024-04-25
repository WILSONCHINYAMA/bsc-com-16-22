#include <iostream>
double Areaoftriangle(double base, double height);
double Areaofrectangle(double length, double width);
double Areaofsquare(double side);

int main() {
    int choice;
    double base, height, length, width, side;
    while (true) {
        std::cout << "Select a shape to calculate the area:" << std::endl;
        std::cout << "1. Triangle" << std::endl;
        std::cout << "2. Rectangle" << std::endl;
        std::cout << "3. Square" << std::endl;
        std::cout << "4. Quit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        switch (choice) {
            case 1:
            std::cout << "Enter the base and height of the triangle: ";
            std::cin >> base >> height;
            std::cout << "Area of the triangle: " << Areaoftriangle(base, height) << std::endl;
                break;
            case 2:
            std::cout << "Enter the length and width of the rectangle: ";
            std::cin >> length >> width;
            std::cout << "Area of the rectangle: " << Areaofrectangle(length, width) << std::endl;
                break;
            case 3:
            std::cout << "Enter the side length of the square: ";
            std::cin >> side;
            std::cout << "Area of the square: " << Areaofsquare(side) << std::endl;
                break;
            case 4:
            std::cout << "Goodbye!" << std::endl;
                return 0;
            default:
            std::cout << "Invalid input. Please enter a valid choice." << std::endl;
        }
    }
    return 0;
}
double Areaoftriangle(double base, double height) {
    return 0.5 * base * height;
}
double Areaofrectangle(double length, double width) {
    return length * width;
}
double Areaofsquare(double side) {
    return side * side;
}
