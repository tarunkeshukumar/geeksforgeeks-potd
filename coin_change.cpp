// https://practice.geeksforgeeks.org/problems/coin-change2448/1

class Solution {
  public:
    long long int count(int coins[], int N, int sum) {

        // code here.
    long long int arr[sum+1] = {0};
     
    arr[0] = 1;
     
    for(int i=0; i<N; i++)
        for(int j=coins[i]; j<=sum; j++)
            arr[j] += arr[j-coins[i]];
     
     return arr[sum];
    }
};
