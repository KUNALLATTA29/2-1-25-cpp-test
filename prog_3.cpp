//Longest Consecutive Sequence

#include<bits/stdc++.h>
using namespace std;

int longest(vector<int>& nums) {
    unordered_set<int> numSet(nums.begin(), nums.end());
    int longest = 0;

    for (int num : nums) {
        if (numSet.find(num - 1) == numSet.end()) {
            int currentNum = num;
            int currentStreak = 1;

            while (numSet.find(currentNum + 1) != numSet.end()) {
                currentNum++;
                currentStreak++;
            }

            longest = max(longest, currentStreak);
        }
    }
    return longest; 
}

int main(){
    vector<int> nums = {100, 4, 200, 1, 3, 2};
    cout << longest(nums) << endl;
    return 0;
}