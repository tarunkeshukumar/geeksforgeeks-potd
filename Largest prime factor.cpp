// https://practice.geeksforgeeks.org/problems/largest-prime-factor2601/1

class Solution{
public: 
    
    long long int largestPrimeFactor(int N){
        // code here
       
        int ans=1;
        int m=N;
        for(int i=2;i*i<=m;i++)
        {
            while(N%i==0)
            {
                ans=i;
                N=N/i;
            }
        }
        
        return (ans>N)?ans:N;
    }
};
