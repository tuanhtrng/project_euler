#include<iostream>

auto main() -> int
{
    auto sum = int{0};
    for(std::size_t i = 0; i < 1000; ++i)
    {
        if(i % 3 == 0 || i % 5 == 0)
        {
            sum += i;
        }
    }
    std::cout << sum << '\n';
    return 0;
}
