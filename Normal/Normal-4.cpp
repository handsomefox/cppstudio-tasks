#include <iostream>
#include <string>

struct People
{
    std::string m_Name;
    unsigned int m_Age = 0;
};
int main()
{
    size_t m_Capacity = 1;
    size_t m_Elements = 0;

    auto *people = new People[m_Capacity];

    bool choice = true;
    while (choice == 1)
    {
        std::cout << "Enter name, age: ";
        std::cin >> people[m_Elements].m_Name >> people[m_Elements].m_Age;

        if (!std::cin.fail())
            m_Elements += 1;
        else
            break;

        for (size_t i = 0; i < m_Capacity; ++i)
        {
            std::cout << "\nExisting entries: \n";
            std::cout << "Entry #" << i + 1 << " Name: " << people[i].m_Name << " Age: " << people[i].m_Age << "\n";
        }

        std::cout << "\n1. Add more\n0.Exit the program\n";
        std::cin >> choice;

        if (m_Elements == m_Capacity)
        {
            m_Capacity += 1;
            auto *newPeople = new People[m_Capacity];

            for (size_t i = 0; i < m_Elements; ++i)
            {
                newPeople[i].m_Age = people[i].m_Age;
                newPeople[i].m_Name = people[i].m_Name;
            }
            delete[] people;
            people = newPeople;
        }
    }
    delete[] people;
    return 0;
}
