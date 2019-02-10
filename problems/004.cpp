#include<array>
#include<cmath>
#include<iostream>

auto main() -> int
{
// let's say a palindromic number has a form xyzzyx
    auto const palindromic_number_xyz = [](
        std::size_t x, std::size_t y, std::size_t z
    ){
        return x*100000 + y*10000 + z*1000 + z*100 + y*10 +x;
    };
// where x = (0, 9], y = [0, 9], z = [0, 9]
    auto const nine_to_one = std::array<std::size_t, 9>{
        9, 8, 7, 6, 5, 4, 3, 2, 1
    };
    auto const nine_to_zero = std::array<std::size_t, 10>{
        9, 8, 7, 6, 5, 4, 3, 2, 1, 0
    };
// search for the largest palindromic number that has two 3-digit factors
    for (auto const & x : nine_to_one){
        for (auto const & y : nine_to_zero){
            for (auto const & z : nine_to_zero){
// construct the defined palindromic number 
                auto palindromic_number = palindromic_number_xyz(x, y, z);
// search for satisfied factors
                for (
                    auto i = std::size_t{100};
                    i <= std::sqrt(palindromic_number);
                    ++i
                ){
                    if (palindromic_number%i == 0){
                        if (palindromic_number/i < 1000){
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
