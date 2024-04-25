#include <iostream>
#include <ctime>
#include <cstdlib>
int main() 
{
    srand(time(nullptr));
    int daysuntilexpiration = rand() % 11 + 1;
    std::cout << "Random Number: " << daysuntilexpiration << std::endl;
        switch (daysuntilexpiration) {
        case 0:
        std::cout << "Your subscription has expired." << std::endl;
        break;
        case 1:
        std::cout << "Your subscription expires within a day!" << std::endl;
        std::cout << "Renew now and save 20%!" << std::endl;
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        std::cout << "Your subscription expires in " << daysuntilexpiration << " days." << std::endl;
        std::cout << "Renew now and save 10%!" << std::endl;
        break;
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        std::cout << "Your subscription will expire soon. Renew now!" << std::endl;
        break;
        default:
        std::cout << "You have an active subscription." << std::endl;
        break;
    }
    return 0;
}
