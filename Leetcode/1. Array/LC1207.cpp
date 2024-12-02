// 1207. Unique Number of Occurrences

// Comes under tag of hashtable too

/*
Given an array of integers arr, return true if the number of occurrences of each value in the array is unique or false otherwise.



Example 1:
Input: arr = [1,2,2,1,1,3]
Output: true
Explanation: The value 1 has 3 occurrences, 2 has 2 and 3 has 1. No two values have the same number of occurrences.

Example 2:
Input: arr = [1,2]
Output: false

Example 3:
Input: arr = [-3,0,1,-3,1,1,1,-3,10,0]
Output: true

*/
class Solution
{
public:
    bool uniqueOccurrences(vector<int> &arr)
    {
        unordered_map<int, int> count;

        for (int i = 0; i < arr.size(); i++)
        {
            count[arr[i]]++;
        }
        unordered_set<int> s;

        for (auto &ii : count)
        {
            int freq = ii.second;

            if (s.find(freq) != s.end())
            {
                return false;
            }
            s.insert(freq);
        }

        return 1;
    }
};