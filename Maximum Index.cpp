// Problem link : https://practice.geeksforgeeks.org/problems/maximum-index3307/1

class Solution{
public:
    int maxIndexDiff(int arr[], int n) {
        // code here
        int ans=0,i=0,j=n-1,k=0;
       
        vector<int> left_min(n,0),right_max(n,0);
        
        left_min[0] = arr[i++];
        right_max[j]= arr[j--];
        
        while(++k<n){
            left_min[i] = min(left_min[i-1],arr[i]);
            right_max[j] = max(right_max[j+1],arr[j]);
            ++i;--j;
        }   
        i=0;j=0;
        while(i<n && j<n){
            if(left_min[i]<=right_max[j]){
                ans = max(ans,j-i);
                ++j;
            }
            else
                ++i;
        }
        return ans;
    }
};
