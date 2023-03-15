#include "pangram.h"

namespace pangram {
    bool is_pangram(str){
        char letter = 'a';
        char LETTER = 'A';
        bool isPangram = true;
        for(int i = 0; i < 26; i++){
            bool containsLetter = false;
            for(int j = 0; j < str.size(); j++){
                if( (str[j] == letter) or (str[j] == LETTER) ){
                    containsLetter = true;
                }
            }
            isPangram = (isPangram && containsLetter);
        }

        return isPangram;
    }
}  // namespace pangram
