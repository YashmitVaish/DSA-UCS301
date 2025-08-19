#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int findMissingNumber(vector<int>& arr){
    int start = 0, end = arr.size()-1, mid;
    
    while(start <= end){
        mid  = (start+end)/2;
        if (arr[mid] == mid+1 ){
            start = mid+1;
        }
        else{
            if ((mid ==0) || (arr[mid-1] == mid)){
                return mid+1;
            }
            end = mid-1;
        }
    }
    
    return arr.size()+1;
}


int main()
{
    vector <int> arr = {1,2,3,4,5,6};
    
    cout<< findMissingNumber(arr);

    return 0;
}