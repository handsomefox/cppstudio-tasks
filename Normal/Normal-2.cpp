#include <iostream>
int main()
{
    size_t n = 0;
    double y = 1.0;
    std::cout << "How much?\n";
    std::cin >> n;
    for (size_t i = 0; i < n; ++i)
        y = 1 + (1 / y);

    std::cout << y;
    return 0;
}
