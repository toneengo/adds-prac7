#include "RecursiveBinarySearch.h"

bool RecursiveBinarySearch::search(std::vector<int> list, int x) {
    int n = list.size();
    searchUtil(list, x, 0, n);
}

bool RecursiveBinarySearch::searchUtil(std::vector<int> list, int x, int l, int r) {
    if ( l > r ) return false;
    if ( list[(r-l)/2] == x ) return true; 
    
    if ( list[(r-l)/2] > x) return searchUtil(list, x, l, (r-l)/2 - 1);
    if ( list[(r-l)/2] > x) return searchUtil(list, x, (r-l)/2 + 1, r);
}
