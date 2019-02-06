#include<iostream>
#include<vector>

auto main() -> int
{
    auto number = (unsigned long long){600851475143};
    auto primes = std::vector{3};
    auto prime_factors = std::vector{1};
    auto odd_number = int{0};

    for ( auto i = std::size_t{2}; i <= (number + 1)/2; ++i)
    {
        auto is_prime = true;
        odd_number = 2*i - 1;
        
        for ( auto prime : primes )
        {
            if ( odd_number % prime == 0 )
            {
                is_prime = false;
            }
        }
        
        if (is_prime)
        {
            auto prime = odd_number;
            primes.emplace_back(prime);

            if ( number % prime == 0 )
            {
                prime_factors.emplace_back(prime);
                number /= prime;
            }
        }
    }
    std::cout << prime_factors.back() << "\n";
    return 0;
}
