// https://practice.geeksforgeeks.org/problems/finding-the-numbers0215/1

class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
        int x = 0;
        for (auto i : nums) 
            x = x ^ i;
        int rmsb = x & (-x);
        int a = 0;
        int b = 0;
        for (auto i : nums){
            if ((i & rmsb) == 0) 
                a = a ^ i;
            else 
                b = b ^ i;
        }
        return {min(a,b), max(a,b)};
        
    }
};
