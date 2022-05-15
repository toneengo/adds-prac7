#include <bits/stdc++.h>
#include "Sort.h"
#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"

using namespace std;

int main() {
    vector<int> vec;
    string buffer;
    int data;
    getline(std::cin, buffer);
    istringstream iss(buffer);
    while (iss >> data)
        vec.push_back(data);

    RecursiveBinarySearch * rbs = new RecursiveBinarySearch();
    Sort * qs = new BubbleSort();

    vector<int> sorted = qs->sort(vec);

    if (rbs->search(vec, 1)) {
        cout << "true ";
    } else {
        cout << "false ";
    }
    for (int i : sorted)
        cout << i << " ";

    cout << endl;
    return 0;
}
