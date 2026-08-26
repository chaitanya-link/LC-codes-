#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        // Key: Element value, Value: Element index
        std::unordered_map<int, int> numMap;
        
        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
            
            // Check if the complement already exists in the map
            if (numMap.find(complement) != numMap.end()) {
                return {numMap[complement], i};
            }
            
            // Store the current number and its index in the map
            numMap[nums[i]] = i;
        }
        
        return {}; // Return empty vector if no solution is found
    }
};
Use code with caution.Brute Force Solution (\(O(n^2)\) Time)If you are looking for a simple approach without using extra space, you can use nested loops to check every possible pair. This uses \(O(1)\) space but is slower.cpp#include <vector>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); ++i) {
            for (int j = i + 1; j < nums.size(); ++j) {
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        return {};
    }
};