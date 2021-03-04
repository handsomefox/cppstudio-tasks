#include <iostream>

int main()
{
    double sum = 0;
    int N, k;
    std::cout << "Enter N, k: ";
    std::cin >> N >> k;
    for (size_t i = 1; i <= N; ++i)
    {
        sum += pow(i, k);
    }
    std::cout << "Sum: " << sum;
    return 0;
}
