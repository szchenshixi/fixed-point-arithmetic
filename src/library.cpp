#include <iostream>
#include <cnl/scaled_integer.h>
// #include <cnl/fixed_point.h>

using DistanceType = int64_t;
using Distance = cnl::scaled_integer<DistanceType, cnl::power<-1, 100>>;

void print() {
    Distance distance = {16.256};
    std::cout << "library: " << distance << std::endl;
}
