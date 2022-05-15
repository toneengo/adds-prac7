#ifndef QUICKSORT_H
#define QUICKSORT_H
#include "Sort.h"

class QuickSort : public Sort {
    public:
        std::vector<int> sort(std::vector<int> list);
    private:
        void sortUtil(std::vector<int> list, int l, int r);
        int partition(std::vector<int> list, int l, int r);
};

#endif
