// https://practice.geeksforgeeks.org/problems/nth-fibonacci-number1335/1

class Solution {
  public:
    int nthFibonacci(int n){
        // code here
        long long mod=1e9+7;
        int arr[n];
        arr[0]=0;
        arr[1]=1;
        for(int i=2;i<=n;i++){
            arr[i]=(arr[i-1]+arr[i-2])%mod;
        }
        return arr[n];
    }
};
