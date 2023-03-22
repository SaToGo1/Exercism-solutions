#include "sieve.h"
#include <iostream>

namespace sieve {
std::vector<int> primes(int limit){
    std::vector<int> v = {};
    for(int i = 2; i < limit; i++){
        v.push_back(i);
    }

    std::vector<int>::iterator primeNumber;
    for (primeNumber = v.begin(); primeNumber < v.end(); primeNumber++){
        std::vector<int>::iterator multiples;
        for(multiples = primeNumber; multiples < v.end(); multiples += *primeNumber){
            if(*multiples != *primeNumber){
                multiples = v.erase(multiples);
            }
        }
        std::cout << *primeNumber << " ";
    }
        
    return v;
}
}  // namespace sieve

//