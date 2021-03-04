#include <iostream>

int main()
{
    int a, b, c;
    std::cout << "Enter three numbers: ";
    std::cin >> a >> b >> c;
    if (a == b || a == c || b == a || b == c)
    {
        a += 5;
        b += 5;
        c += 5;
        std::cout << a << " " << b << " " << c << "\n";
    }
    else
        std::cout << "None of the numbers are equal!\n";
    return 0;
}
