#include <iostream>
#include <ctime>
#include <cstdlib>
int main() 
{
    srand(time(nullptr));
    int daysUntilExpiration = rand() % 11 + 1;
    std::cout << "Random Number: " << daysUntilExpiration << std::endl;
    if (daysUntilExpiration <= 0) {
    std::cout << "Your subscription has expired." << std::endl;
    } else if (daysUntilExpiration <= 1) {
    std::cout << "Your subscription expires within a day!" << std::endl;
    std::cout << "Renew now and save 20%!" << std::endl;
    } else if (daysUntilExpiration <= 5) {
    std::cout << "Your subscription expires in " << daysUntilExpiration << " days." << std::endl;
    std::cout << "Renew now and save 10%!" << std::endl;
    } else if (daysUntilExpiration <= 10) {
    std::cout << "Your subscription will expire soon. Renew now!" << std::endl;
    } else {
    std::cout << "You have an active subscription." << std::endl;
    } 
    return 0;
}
