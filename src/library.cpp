#include <iostream>
#include <cnl/scaled_integer.h>
#include <string>
// #include <cnl/fixed_point.h>
// #include <cnl/all.h>
#include <iostream>

using cnl::power;
using cnl::scaled_integer;
using namespace std;

void declaration_example()
{
    // x is represented by an int and scaled down by 1 bit
    scaled_integer<int, power<-1>> x = scaled_integer<int, power<-1>>{3.5};
    // under the hood, x stores a whole number
    cout << to_rep(x) << endl;  // "7"
    // but it multiplies that whole number by 2^-1 to produce a real number
    cout << x << endl;  // "3.5"
    // like an int, x has limited precision
    x /= 2;
    cout << x << endl;  // "1.5"
}
using DistanceType = int64_t;
using Distance = cnl::scaled_integer<DistanceType, cnl::power<-1, 100>>;

void print() {
    Distance distance = {16.256};
    std::cout << "library: " << distance << std::endl;
    std::cout << "library: " << cnl::to_string(distance) << std::endl;
}
