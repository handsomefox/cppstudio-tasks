#include <iostream>

int main()
{
    char star = '*';
    unsigned int count = 1;
    int size = 10;

    while (count < size)
    {
        for (size_t i = 0; i < count; ++i)
            std::cout << star;

        std::cout << "\n";
        count++;
    }
    return 0;
}
