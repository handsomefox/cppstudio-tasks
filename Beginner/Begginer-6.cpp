#include <iostream>
#include <string>
int main()
{
    std::string house =
        R"(
            /\
           /  \
          /    \
         /      \
        /--------\
       /          \ 
        |        |
        |        |
        |________|   
    )";
    std::cout << house;
    return 0;
}
