#include <iostream>
#include <vector>

int main()
{
    srand(time(nullptr));

    std::vector<float> vec;

    int size = 0;
    float sum = 0;

    std::cout << "Enter the amount of numbers: ";
    std::cin >> size;

    vec.resize(size);

    for (size_t i = 0; i < vec.size(); ++i)
    {
        vec.at(i) = (float)(rand() % 100) / (rand() % 100 + 1);
        if (fabs(vec.at(i)) > 2.5)
        {
            sum += vec.at(i);
        }
        std::cout << vec.at(i) << " ";
    }
    std::cout << "Sum: " << sum;
    return 0;
}
