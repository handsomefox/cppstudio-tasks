#include <iostream>

double formula(int a, int b, int f)
{
    return (a + b - f / a) + f * a * a - (a + b);
}

int main()
{
    int a = 15, b = 10, f = 3;
    std::cout << formula(a, b, f);
    return 0;
}
