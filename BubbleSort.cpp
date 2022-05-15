#include "BubbleSort.h"

std::vector<int> BubbleSort::sort(std::vector<int> list) {
    bool sorted = false;
    int n = list.size();
    while (!sorted) {
        sorted = true;
        for (int i = 0; i < n-1; i++) {
            if (list[i] > list[i+1]) {
                int temp = list[i];
                list[i] = list[i+1];
                list[i+1] = temp; 
                sorted = false;
            }
        }
    }

    return list;
}
