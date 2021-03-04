#include <iostream>

struct Vec3
{
    float x, y, z;
    float len;
    Vec3() : x(0), y(0), z(0)
    {
    }
    void CalculateLenght()
    {
        len = sqrt((x * x) + (y * y) + (z * z));
    }
} vec3;

int main()
{
    std::cout << "Enter x,y,z:";
    std::cin >> vec3.x >> vec3.y >> vec3.z;
    vec3.CalculateLenght();
    std::cout << vec3.len;
    return 0;
}
