//Reorder Array to Maximize Array[i] % Array[j]

#include<bits/stdc++.h>
using namespace std;

vector<int> reorder(vector<int>& arr) {
    sort(arr.rbegin(), arr.rend());
    vector<int> result;

    for (int i = 0; i < arr.size(); i++) {
        if (i % 2 == 0) result.push_back(arr[i / 2]); 
        else result.push_back(arr[arr.size() - 1 - i / 2]);
    }

    return result;
}

int main(){
    vector<int> nums = {10, 15, 20};
    vector<int> result = reorder(nums);

    for (int num : result) {
        cout << num << " ";
    }
    return 0;
}