#include <iostream>

int main()
{
    int a, b;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;

    std::cout << "Result: ";
    a > b ? std::cout << "Bigger" : a == b ? std::cout << "Equal"
                                           : std::cout << "Smaller";
    return 0;
}
