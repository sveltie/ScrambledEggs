/*
https://leetcode.com/problems/palindrome-number/

Time complexity O(N)
*/

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    bool isPalindrome(int x)
    {
        string s = to_string(x);

        for (int i = 0; i < s.size() / 2; i++)
        {
            if (s.at(i) != s.at(s.size() - i - 1))
            {
                return false;
            }
        }

        return true;
    }
};

int main()
{
    Solution solution;
    vector<int> test_case = {121, -121, 10, 16761};
    for (int i = 0; i < test_case.size(); i++)
    {
        cout << solution.isPalindrome(test_case[i]) << "\n";
    }

    return 0;
}