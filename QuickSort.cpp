#include "QuickSort.h"

std::vector<int> QuickSort::sort(std::vector<int> list) {
    int n = list.size() - 1;
    sortUtil(list, 0, n);
    return list;
}

void QuickSort::sortUtil(std::vector<int> list, int l, int r) {
    if (r - l <= 0) return;
    int pivot = partition(list, l, r);
    sortUtil(list, l, pivot-1);
    sortUtil(list, pivot+1, r);
}

int QuickSort::partition(std::vector<int> list, int l, int r) {
    int pivot = list[r];
    if (r - l >= 3)
        pivot = list[l+2];

    while (true) {
        if (list[l] < pivot) l++;

        if (list[r] >= pivot) r--;

        if (l >= r) return l;
        if (list[l] >= pivot && list[r] < pivot) std::swap(list[l], list[r]);
    }
    return 0;
}
