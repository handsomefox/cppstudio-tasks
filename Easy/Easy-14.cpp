#include <iostream>
int main()
{
    std::string text = R"(Если вы ещё не знаете, 
        как работать со строками в С++,
        прочитайте статью на нашем сайте — символы и строки.
        Результат работы программы показан на рисунке 1. 
        )";
    unsigned int newlines = 0;

    for (size_t i = 0; i < text.length(); ++i)
    {
        if (text[i] == '\n')
            newlines++;
    }
    std::cout << "Newlines found: " << newlines;
    return 0;
}
