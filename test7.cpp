#include "Random.h"
#include <iostream>
#include <vector>
#include <algorithm>

int main() {

    // tests if Random::get() function returns an even distribution of numbers

    std::vector<int> v(10); 
    
    for (int a = 0; a < 100000; ++a)
        ++v[Random::get(0, 9)];
    
    for (auto i : v)
        std::cout << i << " ";

    // printed on test cases:
    // 9989 10129 10021 9993 9850 10088 10018 9878 10021 10013
    // 10054 9694 10010 10084 10043 10079 10031 9883 10001 10121

    // is evenly distributed
    


    return 0;
}
