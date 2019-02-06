#include<cmath>
#include<iostream>

auto main() -> int
{
    // let's say the satisfied palindromic number can be presented as xyzzyx,
    // where x = [1, 9], y = [1, 9], and z = [0, 9].
    for (auto x = int{9}; x >= 0; --x)
    {
        for (auto y = int{9}; y >= 0; --y)
        {
            for (auto z = int{9}; z >= 0; --z)
            {
                auto palindromic_number = (
                    x*100000 + y*10000 + z*1000 + z*100 + y*10 + x
                );
                for 
                (
                    auto i = std::size_t{100};
                    i <= std::sqrt(palindromic_number);
                    ++i
                )
                {
                    if (palindromic_number%i == 0)
                    {
                        if (palindromic_number/i < 1000)
                        {
                            std::cout << palindromic_number << "\n";
                            return 0;
                        }
                    }
                }
            }
        }
    }
    std::cout << "No solutions found!" << "\n";
    return 0;
}
