#include <iostream>
#include <vector>

float y = 0;

struct X
{
    float z, b, a, tgB;
    float x;

    void Calculate()
    {
        x = pow(z, 3) - b + pow(a, 2) / pow(tan(tgB), 2);
        y += x;
    }
    void AskInput()
    {
        std::cout << "Enter Z, B, A, tgBetta: ";
        std::cin >> z >> b >> a >> tgB;
    }
};
int main()
{
    std::vector<X> vec;
    unsigned int x_amount = 0;
    std::cout << "Enter the number of x`es: ";
    std::cin >> x_amount;
    vec.resize(x_amount);

    for (size_t i = 0; i < vec.size(); ++i)
    {
        vec.at(i).AskInput();
        vec.at(i).Calculate();
    }
    std::cout << "Y = " << y;
    return 0;
}
