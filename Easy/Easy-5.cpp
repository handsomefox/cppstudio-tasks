#include <iostream>

int main()
{
    float num = 0, power = 0;
    std::cout << "Enter number, power: ";
    std::cin >> num >> power;
    std::cout << pow(num, power);
    return 0;
}
