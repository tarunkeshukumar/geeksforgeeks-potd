// https://practice.geeksforgeeks.org/problems/power-of-numbers-1587115620/1

class Solution{
    public:
    //You need to complete this fucntion
    // Here reducing the power to half and squaring the number and taking the mod
    long long power(int N,int R)
    {
       //Your code here
       int mod = 1e9+7;
       long long ans=1,l=1;
       
       while(R>0){
           if(R & 1)
            ans = (ans*l*N)%mod;  
            R = R>>1;
            N = (N*l*N)%mod;
       }
        return ans;
    }

};
