/*
https://leetcode.com/problems/roman-to-integer/

Time complexity O(N)
*/

#include <iostream>
#include <unordered_map>

using namespace std;

class Solution
{
private:
    unordered_map<char, int> umap = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}};

public:
    int romanToInt(string s)
    {
        int num = 0;

        for (int i = 0; i < s.size(); i++)
        {
            if (umap[s[i]] < umap[s[i + 1]])
            {
                num = num - umap[s[i]];
            }
            else
            {
                num = num + umap[s[i]];
            }
        }

        return num;
    }
};

int main()
{
    Solution solution;
    string input = "XII";
    cout << solution.romanToInt(input) << "\n";
}
