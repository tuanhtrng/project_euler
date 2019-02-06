#include<iostream>

auto main() -> int
{
    auto fibonacci = int{2};
    auto fibonacci_next = int{8};
    auto sum = int{fibonacci};

    while (fibonacci_next <= 4000000)
    {
        sum += fibonacci_next;
        auto tmp = fibonacci;
        fibonacci = fibonacci_next;
        fibonacci_next = 4*fibonacci_next + tmp;
    }
    std::cout << sum << "\n";
    return 0;
}
