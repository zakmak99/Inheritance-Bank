#pragma once
#include <iostream>
void ClearInputBuffer()
{
    std::cin.clear();
    std::cin.ignore(INT_MAX, '\n');
}
float FloatCheck()
{

    while (true)
    {
        float temp;
        std::cin >> temp;
        if (std::cin.fail())
        {
            std::cout << "\nInvalid input. Please try agian.\n";
            ClearInputBuffer();
        }
        else
        {
            ClearInputBuffer();
            return temp;
            break;
        }
    }
}
int IntCheck()
{

    while (true)
    {
        int temp;
        std::cin >> temp;
        if (std::cin.fail())
        {
            std::cout << "\nInvalid input. Please try agian.\n";
            ClearInputBuffer();
        }
        else
        {
            ClearInputBuffer();
            return temp;
            break;
        }
    }
}