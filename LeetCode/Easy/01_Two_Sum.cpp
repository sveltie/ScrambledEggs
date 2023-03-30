/*
Given an array of integers nums and an integer target,
return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution,
and you may not use the same element twice.
You can return the answer in any order.

Time Complexity O(N^2) runtime 4 ms
*/

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        // Look through each element of the array
        for (int i = 0; i < nums.size(); i++)
        {
            // Complement of current element that adds up to target
            int complement = target - nums[i];

            // Look through each element of the array
            // We started from one because we already looked at index 0
            for (int j = 1; j < nums.size(); j++)
            {
                // If we found any elements at index j that equal to
                // complement then we return it
                if (nums[j] == complement)
                {
                    return {i, j};
                }
            }
        }

        return {-1, -1};
    }
};

int main()
{
    Solution solution;
    vector<int> nums = {6, 2, 4, 8, 6, 5};
    vector<int> output = solution.twoSum(nums, 13);
    for (int i = 0; i < 2; i++)
    {
        cout << output[i] << "\n";
    }

    return 0;
}