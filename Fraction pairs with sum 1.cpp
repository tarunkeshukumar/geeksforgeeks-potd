// https://practice.geeksforgeeks.org/problems/fraction-pairs-with-sum-1/1

class Solution
{
    public:
    int countFractions(int n, int num[], int den[])
    {
        unordered_map<float,int> m;
        float f=1;
        int count=0;
        for(int i=0; i<n; ++i){
            float x = (den[i]-num[i])*f/den[i];
            float y = num[i]*f/den[i];
            if(m.find(x) != m.end())
                count += m[x];
            
            m[y]++;
        }
        
        return count;
    }
};
