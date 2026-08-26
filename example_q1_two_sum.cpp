/*
    Problem   : Two Sum
    Link      : https://leetcode.com/problems/two-sum/
    Difficulty: Easy
    Date      : 26-08-2026
    Pattern   : Hashing

    Approach:
    - Store each number's index in a hash map as we iterate.
    - For each number, check if (target - number) already exists in the map.

    Time Complexity  : O(n)
    Space Complexity : O(n)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen; // value -> index
        for (int i = 0; i < nums.size(); i++) {
            int need = target - nums[i];
            if (seen.count(need)) {
                return {seen[need], i};
            }
            seen[nums[i]] = i;
        }
        return {};
    }
};

// ---------------- Local test (optional, remove before pasting into LeetCode) ----------------
int main() {
    Solution sol;
    vector<int> nums = {2, 7, 11, 15};
    auto result = sol.twoSum(nums, 9);
    cout << result[0] << " " << result[1] << endl; // expected: 0 1
    return 0;
}
