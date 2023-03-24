#include "sieve.h"

namespace sieve {
std::vector<int> primes(int limit){
    std::vector<int> vectorOfNumbers = {};
    std::set<int> notPrimes = {};

    for(int number = 2; number <= limit; number++){
        vectorOfNumbers.push_back(number);
    }
    
    std::vector<int>::iterator itNumbers;
    std::vector<int>::iterator itMultiples;
    for (itNumbers = vectorOfNumbers.begin(); itNumbers < vectorOfNumbers.end(); itNumbers++){
        for(itMultiples = itNumbers; itMultiples < vectorOfNumbers.end(); itMultiples += *itNumbers){
            if(*itMultiples != *itNumbers){
                notPrimes.insert(*itMultiples);
                std::cout << *itMultiples << " ";
            }
        }
    }

    std::set<int>::iterator itNotPrimes;
    for (itNumbers = vectorOfNumbers.begin(); itNumbers < vectorOfNumbers.end(); itNumbers++){
        for(itNotPrimes = notPrimes.begin(); itNotPrimes != notPrimes.end(); itNotPrimes++){
            if(*itNotPrimes == *itNumbers){
                itNumbers = vectorOfNumbers.erase(itNumbers);
            }
        }
    }
        
    return vectorOfNumbers;
}
}  // namespace sieve

//