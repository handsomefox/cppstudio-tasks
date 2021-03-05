#include <iostream>
int main()
{
    size_t m_Capacity = 1;
    size_t m_Elements = 0;
    auto *store = new int[m_Capacity];

    while (true)
    {
        int num;
        std::cout << "Enter a number: ";
        std::cin >> num;
        if (std::cin.fail())
            break;
        if (num < 0)
            break;

        store[m_Elements] = num;
        m_Elements += 1;

        if (m_Elements == m_Capacity)
        {
            m_Capacity += 1;
            int *newStore = new int[m_Capacity];

            for (size_t i = 0; i < m_Elements; ++i)
            {
                newStore[i] = store[i];
            }
            delete[] store;
            store = newStore;
        }

        std::cout << "All the numbers stored right now: ";
        for (size_t i = 0; i < m_Capacity - 1; ++i)
        {
            std::cout << store[i] << " ";
        }
        std::cout << "\n";
    }
    delete[] store;
    return 0;
}
