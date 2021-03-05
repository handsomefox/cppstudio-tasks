#include <iostream>
#include <string>
int main()
{
    int a = 0;

    std::cin >> a;
    if (a > 99 && a < 1000)
    {
        std::string temp = std::to_string(a);

        if (temp.find(temp[0], 1) != std::string::npos || temp.find(temp[0], 2) != std::string::npos)
        {
            std::cout << "There are equal numbers in this integer\n";
        }
        else if (temp.find(temp[1], 2) != std::string::npos)
        {
            std::cout << "There are equal numbers in this integer\n";
        }
        else
        {
            std::cout << "There are no equal numbers in this integer\n";
        }
    }
    else
        std::cout << "\nThe number you entered is not 3-digit";

    return 0;
}
