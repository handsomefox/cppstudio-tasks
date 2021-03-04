#include <iostream>
#include <string>

int main()
{
    std::string str;
    int num;
    std::cout << "Enter two digit number: ";
    std::cin >> num;

    if (num > 99 || num < 10)
    {
        std::cout << "Number is not two digit.";
        return 0;
    }

    str = std::to_string(num);

    if (str[0] > str[1])
    {
        std::cout << str[0] << " is bigger than " << str[1];
    }
    else if (str[0] == str[1])
    {
        std::cout << str[1] << " is equal to " << str[0];
    }
    else
    {
        std::cout << str[0] << " is smaller than " << str[1];
    }
    return 0;
}
