#include <iostream>
#include <string>

void AdjustRightBorder(std::string &string, const std::string &border)
{
    size_t len = border.length() - string.length();
    for (size_t i = 0; i < len - 2; i++)
    {
        string += (" ");
    }
    string.append("*\n");
};

int main()
{
    setlocale(LC_ALL, "Russian");
    std::string fname, mname, lname, group;
    std::cin >> fname >> mname >> lname >> group;

    std::string work = "* Лабораторная работа #1";
    std::string made_by = "* Выполнил(a): ст. гр. " + group;
    std::string fullname = "* " + lname + " " + fname + " " + mname;

    std::string border;

    size_t width = std::max(made_by.length(), fullname.length()) + 2;

    for (size_t i = 0; i < width; ++i)
    {
        border += "*";
    }
    border += "\n";

    AdjustRightBorder(work, border);
    AdjustRightBorder(made_by, border);
    AdjustRightBorder(fullname, border);

    std::cout << border;
    std::cout << work << made_by << fullname;
    std::cout << border;

    return 0;
}
