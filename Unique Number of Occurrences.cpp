// https://practice.geeksforgeeks.org/problems/unique-frequencies-of-not/1

class Solution
{
    public:
    bool isFrequencyUnique(int n, int arr[])
    {
        unordered_map<int,int> m,m1;
        for(int i=0; i<n; ++i)
            m[arr[i]]++;
        for(auto x:m)
            m1[x.second]++;
            
        for(auto x:m1)
            if(x.second>1)
                return false;
        return true;
    }
};
