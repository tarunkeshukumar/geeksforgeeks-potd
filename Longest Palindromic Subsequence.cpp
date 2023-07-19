// https://practice.geeksforgeeks.org/problems/longest-palindromic-subsequence-1612327878/1

class Solution{
  public:
    int longestPalinSubseq(string s) {
        //code here
        // reverse the string and find the longest common subsequence
        // bbabcbcab
        // bacbcbabb
        // babcbab
        
        string str="";
        int n=s.length();
        
        for(int i=n-1;i>=0;--i)
            str += s[i];
            
        vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
        
        for(int i=0;i<=n;++i){
            for(int j=0;j<=n;++j){
                if(i==0 || j==0){
                    dp[i][j]=0;
                    continue;
                }
                if(str[i-1] == s[j-1]){
                    dp[i][j] = 1 + dp[i-1][j-1];
                }
                else{
                    dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return dp[n][n];
    }
};
