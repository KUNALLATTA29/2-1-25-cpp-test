//Smallest Subarray with Sum Greater Than X

#include<bits/stdc++.h>
using namespace std;

int minSubArrayLen(int x, vector<int>& nums) {
    int n = nums.size();
    int left = 0, right = 0;
    int sum = 0;
    int minLen = INT_MAX;

    while (right < n) {
        sum += nums[right];

        while (sum >= x) {
            minLen = min(minLen, right - left + 1);
            sum -= nums[left];
            left++;
        }

        right++;
    }

    return (minLen == INT_MAX) ? 0 : minLen;
}

int main() {
    vector<int> arr = {2, 3, 1, 2, 4, 3};
    int x = 7;
    int minLen = minSubArrayLen(x, arr);

    cout<< minLen << endl;

    return 0;
}