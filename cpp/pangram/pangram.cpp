#include "pangram.h"
#include <iostream>
//using namespace std;

namespace pangram {
    bool is_pangram(std::string str){

        int length = str.length();
        char letter = 'a';
        char LETTER = 'A';
        bool isPangram = true;
        bool containsLetter = false;

        // iterate on every letter
        for(int i = 0; i < 26; i++){
            containsLetter = false;

            // iterate on the string.
            for(int j = 0; j < length; j++){
                if( (str[j] == letter) or (str[j] == LETTER) ){
                    containsLetter = true;
                }
            }
            isPangram = (isPangram && containsLetter);
            letter ++;
            LETTER ++;
        }

        return isPangram;
    }
}
