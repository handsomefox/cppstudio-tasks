#include <iostream>

float gen_numbers(unsigned int &x0, unsigned int m, unsigned int a, unsigned int inc)
{
    x0 = ((a * x0) + inc) % m;
    return x0 / float(m);
}

int main()
{
    const unsigned int n = 10;
    unsigned int x0 = 2;
    for (size_t i = 0; i <= n; ++i)
        std::cout << gen_numbers(x0, 100, 8, 65) << " ";

    return 0;
}
