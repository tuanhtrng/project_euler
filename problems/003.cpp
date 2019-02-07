#include<iostream>
#include<vector>

auto main() -> int
{
    auto number = 600851475143;
    auto primes = std::vector<decltype(number)>{3};
    auto prime_factors = std::vector<decltype(number)>{1};

    for ( auto i = std::size_t{2}; (2*i - 1) <= number; ++i)
    {
        for ( auto prime : primes )
        {
            if ( (2*i - 1)%prime != 0 )
            {
                auto prime = 2*i - 1;
                primes.emplace_back(prime);

                if ( number%prime == 0 )
                {
                    prime_factors.emplace_back(prime);
                    number /= prime;
                }            
            }
        }
    }
    std::cout << prime_factors.back() << "\n";
    return 0;
}
