#include<iostream>

auto main() -> int
{
    auto fibonacci = int{1};
    auto fibonacci_next = int{2};
    auto sum = int{0};

    while (fibonacci_next <= 4000000)
    {
        if (fibonacci_next % 2 == 0)
        {
            sum += fibonacci_next;
        }
        auto tmp = fibonacci;
        fibonacci = fibonacci_next;
        fibonacci_next = fibonacci_next + tmp;
    }
    std::cout << sum << "\n";
    return 0;
}
