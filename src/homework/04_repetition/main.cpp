#include <iostream>
#include "repetition.h"

int main()
{
    int choice;
    int num;

    do
    {
        std::cout << "\nHomework 4 Menu\n";
        std::cout << "1-Factorial\n";
        std::cout << "2-Sum odd numbers\n";
        std::cout << "3-Exit\n";
        std::cin >> choice;

        if (choice == 1)
        {
            do
            {
                std::cout << "Enter a number (1-9): ";
                std::cin >> num;
            }
            while (num <= 0 || num >= 10);

            std::cout << "Factorial: "
                      << get_factorial(num) << std::endl;
        }
        else if (choice == 2)
        {
            do
            {
                std::cout << "Enter a number (1-99): ";
                std::cin >> num;
            }
            while (num <= 0 || num >= 100);

            std::cout << "Sum of odd numbers: "
                      << sum_odd_numbers(num) << std::endl;
        }

    } while (choice != 3);

    return 0;
}
