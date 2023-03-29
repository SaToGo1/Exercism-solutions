#include "binary_search.h"

namespace binary_search {
    int find(std::vector<int> vec, int number){
        std::vector<int> data = vec;
        std::vector<int>::iterator itStart = data.begin();
        std::vector<int>::iterator itMid;
        std::vector<int>::iterator itEnd = data.end();
        int num = 0;
        for(itMid = data.begin() + data.size() / 2; itStart <= itEnd; itMid = data.begin() + data.size() / 2){
            if(*itMid == number) {
                num += itMid - data.begin();
                return num;
            } else if(*itMid > number){
                data.erase(itMid, itEnd);

            }else{
                num += data.size() / 2;
                data.erase(itStart, itMid);

            }
            
            itEnd = data.end();
            itStart = data.begin();
        }
        
        return 0;
    }

}