#if !defined(BINARY_SEARCH_H)
#define BINARY_SEARCH_H

#include <vector>

namespace binary_search {
    int find(std::vector<int> data, int number);
    std::vector<int>::iterator NewMiddle(std::vector<int>::iterator itEnd, std::vector<int>::iterator itStart, std::vector<int> data);
}  // namespace binary_search

#endif // BINARY_SEARCH_H