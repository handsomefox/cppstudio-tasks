#include <iostream>

int main()
{
    int v, t;
    float a;
    std::cout << "Enter V, T: ";
    std::cin >> v >> t;

    a = asin((9.8 * t) / (2 * v));
    std::cout << "V = " << v << "\n";
    std::cout << "T = " << t << "\n";

    std::cout << "Angle = " << a * (90 / asin(1));
    return 0;
}
