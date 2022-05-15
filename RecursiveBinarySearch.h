#ifndef BINARYSEARCH_H
#define BINARYSEARCH_H
#include <vector>

class RecursiveBinarySearch {
    public:
        bool search(std::vector<int> list, int x);
    private:
        bool searchUtil(std::vector<int> list, int x, int l, int r);
};

#endif
