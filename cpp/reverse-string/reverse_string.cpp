#include "reverse_string.h"

namespace reverse_string {
    std::string reverse_string(std::string input){
        if(input.empty()) {
            return input;
        } 
        
        size_t left = 0;
        size_t right = input.length() - 1; //unsigned value, can't have negative number

        while(left < right){
            std::swap(input[left], input[right]);
            left++;
            right--;
        }

        return input;
    }
}  // namespace reverse_string
