#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {

    vector<int> arr = {1,2,3,4,4,5,5,6};

    unordered_map<int, int> freq;
    
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    cout << "Total distinct elements: " << freq.size() << endl;

    return 0;
}
