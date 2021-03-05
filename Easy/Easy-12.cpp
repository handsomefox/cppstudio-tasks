#include <iostream>

int main()
{
    float x, y;
    unsigned int qp = 0;
    std::cout << "Enter x,y: ";
    std::cin >> x >> y;

    if (x > 0)
    {
        if (y > 0)
        {
            qp = 1;
        }
        else
            qp = 4;
    }
    else
    {
        if (y > 0)
        {
            qp = 2;
        }
        else
        {
            qp = 3;
        }
    }

    std::cout << "Quarter plane: " << qp;

    return 0;
}
