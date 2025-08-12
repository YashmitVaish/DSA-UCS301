# include <stdio.h>
# include <bits/stdc++.h>

using namespace std;

int main(){
    vector <int> arr = {1,2,3,4,5,6};
    int target = 0;
    cout << "enter number to search"<< endl;
    cin >> target;
    int start = 0, end = arr.size(),mid = 0;
    while(start<=end){
        mid = (start+end)/2;
        if(arr[mid] == target){
            cout<< "element found at" << mid;
            return 0;
        }
        if(arr[mid]>target){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    cout << "element not found";
    return 0;
}
