#include<iostream>

#include"../include/project_euler.hpp"

auto main() -> int
{
    auto divisible_by_3 = [](auto k){return 3*k;};
    auto divisible_by_5 = [](auto k){return 5*k;};
    auto divisible_by_15 = [](auto k){return 15*k;};

    auto k_3 = int{999/3};
    auto k_5 = int{999/5};
    auto k_15 = int{999/15};

    auto sum_3 = project_euler::infinite_sum(k_3, divisible_by_3);
    auto sum_5 = project_euler::infinite_sum(k_5, divisible_by_5);
    auto sum_15 = project_euler::infinite_sum(k_15, divisible_by_15);
    std::cout << sum_3 + sum_5 - sum_15 << '\n';
    return 0;
}
