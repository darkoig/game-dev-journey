#include <iostream>

void interest_calculation(double& balance) {
    balance += balance * 0.05;
}


int main()
{
    double balance = 100;
    for (int i = 1; i <= 10; ++i) {
        interest_calculation(balance);
        std::cout << "Year: " << i << ", Balance: " << balance << "\n";
    }
    std::cout << "Final Balance: " << balance;
    return 0;
}


