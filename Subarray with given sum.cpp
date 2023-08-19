// https://practice.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1

class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        // Your code here
        int left=0,right=1,i=0;
        long long sum=arr[0];
        
        while(left<right && right<n){
            if(arr[i]==s)
                return {i+1,i+1};
            ++i;
            sum+=arr[right];
            if(sum==s){
                    return {left+1,right+1};
                }
            while(sum>s && left<right && right<n){
                sum-=arr[left++];
                if(sum==s){
                    return {left+1,right+1};
                }
            }
            ++right;
        }
        return {-1};
    }
};
