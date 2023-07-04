// problem link : https://practice.geeksforgeeks.org/problems/count-the-subarrays-having-product-less-than-k1708/1

class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        
        if(k==1)
            return 0;
        int right=0,left=0,count=0;
        long long int temp = 1;
            
            while(right<n){
                temp *=a[right];
                while(temp>=k)
                    temp /=a[left++];
                count +=(right+1-left);
                ++right;
            }
        return count;
    }
};
