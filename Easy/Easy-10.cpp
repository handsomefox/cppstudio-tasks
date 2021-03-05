#define _USE_MATH_DEFINES // for M_PI definition
#include <cmath>          // for M_PI definition
#include <iostream>

double cot(double x)
{
    return cos(x) / sin(x);
}

double calculate(double x, double y)
{
    return (pow(1 - tan(x), cot(x)) + cos(x - y));
}

int main()
{
    double x, y;
    std::cout << "Enter x,y:";
    std::cin >> x >> y;
    x = x * M_PI / 180;
    y = y * M_PI / 180;
    std::cout << calculate(x, y);
    return 0;
}
