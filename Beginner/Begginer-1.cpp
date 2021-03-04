#include <iostream>
#include <string>
int main()
{
    int a = 10819;
    //  std::cout << "Enter 5digit number:";

    std::string temp = std::to_string(a);

    for (size_t i = 0; i < temp.length(); ++i)
    {
        std::cout << i + 1 << " equals: " << temp[i] << "\n";
    }
    return 0;
}
