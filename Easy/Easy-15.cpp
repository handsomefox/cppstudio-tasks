#include <iostream>
int main()
{
    unsigned int d, l;
    unsigned int a, b, c;
    std::cout << "Enter brick length, height , width:";
    std::cin >> a >> b >> c;
    std::cout << "Enter opening length, height:";
    std::cin >> d >> l;

    if (b <= d && c <= l)
        std::cout << "Brick can enter the hole (state1)\n";
    else if (a <= d && c <= l)
        std::cout << "Brick can enter the hole (state2) \n";
    else if (a <= d && b <= l)
        std::cout << "Brick can enter the hole (state3) \n";
    else
        std::cout << "Brick cannot enter the hole :(";
    return 0;
}

// проекции кирпича
/*
   ******************************************    *****************
   *             сторона № 2                *    *  сторона № 1  *
   *                                        *    *               *
   ******************************************    *****************
 
   ******************************************
   *                                        *
   *                                        *
   *            сторона № 3                 *
   *                                        *
   *                                        *
   ******************************************
*/
