// https://practice.geeksforgeeks.org/problems/next-smallest-palindrome4740/1

class Solution{
public:
	    vector<int> generateNextPalindrome(int num[], int n) {
	   // code here
	    bool diff = 1;
        for(int i = 0; i < n / 2; i++){
            if(num[i] < num[n - i - 1])
                diff = 1;
            else if(num[i] > num[n - i - 1])
                diff = 0;
                
            num[n - i - 1] = num[i];
        }
        
        vector<int> ans(n);
        for(int i = 0; i < n; i++)
            ans[i] = num[i];
            
        int ind = n / 2;
        
        bool carry = diff;
        while(carry and ind < n){
            if(ans[ind] == 9){
               ans[ind] = 0;
               ans[n - ind - 1] = 0;
            }
            else{
               ++ans[ind];
               ans[n - ind - 1] = ans[ind];
               carry = 0;
            }
            
            ++ind;
        }
        
        if(carry){
           ans[0] = 1;
           ans.push_back(1);
        }
            
        return ans;
	}

};
