#include "reverse_string.h"

namespace reverse_string {
    std::string reverse_string(std::string input){
        std::string reversed;
        int length = input.length();

        for(int i = length - 1; i >= 0; i--){
            reversed += input[i];
        }

        return reversed;
    }
}  // namespace reverse_string
