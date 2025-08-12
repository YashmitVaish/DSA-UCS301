#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int mergeAndCount(vector<int> &arr, int left, int mid, int right) {
    vector<int> leftArr(arr.begin() + left, arr.begin() + mid + 1);
    vector<int> rightArr(arr.begin() + mid + 1, arr.begin() + right + 1);

    int i = 0, j = 0, k = left;
    int  swaps = 0;

    while (i < leftArr.size() && j < rightArr.size()) {
        if (leftArr[i] <= rightArr[j]) {
            arr[k++] = leftArr[i++];
        } else {
            arr[k++] = rightArr[j++];
            swaps += (leftArr.size() - i); 
        }
    }

    while (i < leftArr.size())
        arr[k++] = leftArr[i++];
    while (j < rightArr.size())
        arr[k++] = rightArr[j++];

    return swaps;
}

int mergeSortAndCount(vector<int> &arr, int left, int right) {
    int count = 0;
    if (left < right) {
        int mid = left + (right - left) / 2;
        count += mergeSortAndCount(arr, left, mid);
        count += mergeSortAndCount(arr, mid + 1, right);
        count += mergeAndCount(arr, left, mid, right);
    }
    return count;
}

int main() {
    vector<int> arr = {1,2,3,4,5};

    int inversionCount = mergeSortAndCount(arr, 0, arr.size()-1);
    cout << "number of inversions: " << inversionCount << endl;
    return 0;
}
