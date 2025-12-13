#include <cassert>
#include "repetition.h"

void test_get_factorial()
{
    assert(get_factorial(1) == 1);
    assert(get_factorial(3) == 6);
    assert(get_factorial(5) == 120);
    assert(get_factorial(7) == 5040);
    assert(get_factorial(9) == 362880);
}

void test_sum_odd_numbers()
{
    assert(sum_odd_numbers(1) == 1);
    assert(sum_odd_numbers(5) == 9);     // 1+3+5
    assert(sum_odd_numbers(10) == 25);   // 1+3+5+7+9
    assert(sum_odd_numbers(15) == 64);
    assert(sum_odd_numbers(99) == 2500);
}

int main()
{
    test_get_factorial();
    test_sum_odd_numbers();
    return 0;
}
