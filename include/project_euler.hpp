#ifndef PROJECT_EULER_H
#define PROJECT_EULER_H

namespace project_euler {

template<class UnaryFunction>
auto infinite_sum
(
    std::size_t k,
    UnaryFunction f 
) -> decltype((f(k) + f(1))*k/2)
{
    return (f(k) + f(1))*k/2;
}

}

#endif
