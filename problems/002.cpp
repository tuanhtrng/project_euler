#include<iostream>

auto main() -> int
{
    auto even_fibonacci_prv = int{2};
    auto even_fibonacci_cur = int{8};
    auto sum = int{even_fibonacci_prv};

    while (even_fibonacci_cur <= 4000000)
    {
        sum += even_fibonacci_cur;
        auto tmp = even_fibonacci_prv;
        even_fibonacci_prv = even_fibonacci_cur;
        even_fibonacci_cur = 4*even_fibonacci_cur + tmp;
    }
    std::cout << sum << "\n";
    return 0;
}
