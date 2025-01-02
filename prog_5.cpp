//Trapping Rainwater

#include<bits/stdc++.h>
using namespace std;

int maxSum(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans = nums;

    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (nums[i] > nums[j]) {
                ans[i] = max(ans[i], ans[j] + nums[i]);
            }
        }
    }

    return *max_element(ans.begin(), ans.end());
}

int main(){
    vector<int> nums = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    cout << maxSum(nums) << endl;
    return 0;
}