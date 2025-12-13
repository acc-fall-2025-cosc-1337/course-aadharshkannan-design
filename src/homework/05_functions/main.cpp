#include <iostream>
#include <string>
#include "func.h"

int main()
{
    int choice;
    std::string dna;

    do
    {
        std::cout << "\nHomework 5 Menu\n";
        std::cout << "1- Get GC Content\n";
        std::cout << "2- Get DNA Complement\n";
        std::cout << "3- Exit\n";
        std::cin >> choice;

        if (choice == 1)
        {
            std::cout << "Enter DNA string: ";
            std::cin >> dna;
            double gc = get_gc_content(dna);
            std::cout << "GC content: " << gc << std::endl;
        }
        else if (choice == 2)
        {
            std::cout << "Enter DNA string: ";
            std::cin >> dna;
            std::string complement = get_dna_complement(dna);
            std::cout << "DNA complement: " << complement << std::endl;
        }

    } while (choice != 3);

    return 0;
}
