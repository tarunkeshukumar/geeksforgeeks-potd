// https://practice.geeksforgeeks.org/problems/longest-increasing-subsequence-1587115620/1

class Solution
{
    public:
    //Function to find length of longest increasing subsequence.
    
    int bsearch(int l, int h, vector<int>&ans, int num){
        while(l<=h){
            int mid = (h-l)/2 + l;
            if(ans[mid] == num)
                return mid;
            else if(ans[mid] > num)
                h = mid-1;
            else
                l = mid +1;
        }
        return l;
    }
    
    int longestSubsequence(int n, int a[])
    {
       // your code here
       
       vector<int> ans(n,-1);
       int high =0;
       ans[0] = a[0];
       
       for(int i=1; i<n; ++i){
           int index = bsearch(0,high,ans, a[i]);
           if(index >high)
                high = index;
            ans[index] = a[i];
       }
       return high + 1;
    }
};
