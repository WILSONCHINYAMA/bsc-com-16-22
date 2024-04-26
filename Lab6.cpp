#include <iostream>
int main() {
    int rows, cols;
    do {
        std::cout << "Enter the number of rows: ";
        std::cin >> rows;
        if (rows > 3 || rows <= 0) {
            std::cout << "Invalid number of rows";
        }
    } while (rows > 3 || rows <= 0);
    do {
        std::cout << "Enter the number of columns";
        std::cin >> cols;
        if (cols > 3 || cols <= 0) {
            std::cout << "Invalid number of columns";
        }
    } while (cols > 3 || cols <= 0);
    double **array = new double *[rows];
    for (int i = 0; i < rows; ++i) {
        array[i] = new double[cols];
    }
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << "Enter value  [" << i << "][" << j << "]: ";
            std::cin >> array[i][j];
        }
    }
    std::cout << "Array elements:";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << array[i][j] << " ";
        }
        std::cout << std::endl;
    }
    for (int i = 0; i < rows; ++i) {
        delete[] array[i];
    }
    delete[] array;

    return 0;
}
