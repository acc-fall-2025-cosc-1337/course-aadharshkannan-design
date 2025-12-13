#include "func.h"

// Calculate GC content (C or G / total)
double get_gc_content(const std::string& dna)
{
    int count = 0;
    for (char c : dna)
    {
        if (c == 'G' || c == 'C')
            count++;
    }
    return static_cast<double>(count) / dna.length();
}

// Reverse a string manually
std::string get_reverse_string(std::string dna)
{
    int n = dna.length();
    for (int i = 0; i < n / 2; i++)
    {
        char temp = dna[i];
        dna[i] = dna[n - i - 1];
        dna[n - i - 1] = temp;
    }
    return dna;
}

// Return reverse complement
std::string get_dna_complement(std::string dna)
{
    std::string reversed = get_reverse_string(dna);

    for (char& c : reversed)
    {
        switch(c)
        {
            case 'A': c = 'T'; break;
            case 'T': c = 'A'; break;
            case 'C': c = 'G'; break;
            case 'G': c = 'C'; break;
        }
    }

    return reversed;
}
