/*
Problem: Find the Largest Element in an Array

Given an array of integers nums, return the value of the largest element in the array.

Example:
Input: nums = [3, 3, 6, 1]
Output: 6

Approach 1 (Optimal Approach):
Traverse the array and keep track of the largest element.

Time Complexity: O(n)
Space Complexity: O(1)

Approach 2 (Sorting Approach):
Sort the array and return the last element.

Time Complexity: O(n log n)
Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int largestElement(vector<int>& nums) {
        int largest = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > largest) {
                largest = nums[i];
            }
        }

        return largest;
    }
};

/*
// Sorting Approach

class Solution {
public:
    int largestElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        return nums[nums.size() - 1];
    }
};
*/

int main() {
    vector<int> nums = {3, 3, 6, 1};

    Solution obj;
    int result = obj.largestElement(nums);

    cout << "Largest element in the array: " << result << endl;

    return 0;
}
