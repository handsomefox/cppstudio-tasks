#include <fstream>
#include <iostream>
#include <string>
int main()
{
    std::string path;

    std::cout << "Enter file name: ";
    getline(std::cin, path);

    size_t lcount = 0, rcount = 0;

    std::ifstream stream(path);

    stream.seekg(0, stream.end);
    size_t length = stream.tellg();
    stream.seekg(0, stream.beg);

    char *buffer = new char[length];

    stream.read(buffer, length);
    stream.close();

    for (size_t i = 0; i < length; ++i)
    {
        if (buffer[i] == '{')
            lcount++;

        if (buffer[i] == '}')
            rcount++;
    }

    if (lcount == rcount)
        std::cout << "Bracket count matches";
    else
        std::cout << "Bracket count is not equal";

    std::ofstream output("out.txt");
    output.write(buffer, length);

    output.close();
    delete[] buffer;
    return 0;
}
