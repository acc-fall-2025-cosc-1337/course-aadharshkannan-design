#include <cassert>
#include <cmath>
#include "func.h"

const double EPSILON = 0.0001;

void test_get_gc_content()
{
    assert(std::abs(get_gc_content("AGCTATAG") - 0.375) < EPSILON);
    assert(std::abs(get_gc_content("CGCTATAG") - 0.50) < EPSILON);
}

void test_get_reverse_string()
{
    assert(get_reverse_string("AGCTATAG") == "GATATCGA");
    assert(get_reverse_string("CGCTATAG") == "GATATCGC");
}

void test_get_dna_complement()
{
    assert(get_dna_complement("AAAACCCGGT") == "ACCGGGTTTT");
    assert(get_dna_complement("CCCGGAAAAT") == "ATTTTCCGGG");
}

int main()
{
    test_get_gc_content();
    test_get_reverse_string();
    test_get_dna_complement();
    return 0;
}
