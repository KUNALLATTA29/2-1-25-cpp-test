// Maximize Sum of Products After K Negations

#include<bits/stdc++.h>
using namespace std;

int maxi(vector<int>& arr, int k) {
    sort(arr.begin(), arr.end());
    for (int i = 0; i < arr.size() && k > 0; i++) {
        if (arr[i] < 0 && k > 0) {
            arr[i] = -arr[i];
            k--;
        }
    }
    if (k % 2 == 1) {
        *min_element(arr.begin(), arr.end()) = -(*min_element(arr.begin(), arr.end()));
    }
    return accumulate(arr.begin(), arr.end(), 0);
}

int main() {
    vector<int> arr = {-2, 0, 3};
    int k = 2;
    cout << maxi(arr, k) << endl; 
    return 0;
}