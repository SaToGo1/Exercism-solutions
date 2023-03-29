#include "binary_search.h"

namespace binary_search {
    int find(std::vector<int> data, int number){

        //std::vector<int> data = vec;
        std::vector<int>::iterator itStart = data.begin();
        std::vector<int>::iterator itMid;
        std::vector<int>::iterator itEnd = data.end();
        for(itMid = NewMiddle(itEnd, itStart, data); itStart < itEnd; itMid = NewMiddle(itEnd, itStart, data) ){
            if(*itMid == number) {
                int num = itMid - data.begin();
                return num;
                
            } else if(*itMid > number){
                itEnd = itMid;
                    
            }else{
                itStart = itMid;
            }
        }
        
        return 0;
    }

std::vector<int>::iterator NewMiddle(std::vector<int>::iterator itEnd, std::vector<int>::iterator itStart, std::vector<int> data){
    int Start = itStart - data.begin();
    int End = itEnd - data.begin();
    int index = End - Start / 2;

    std::vector<int>::iterator mid = data.begin() + index;
    return mid;
}

}  // namespace binary_search

// it - vec.begin()