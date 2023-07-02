// Problem link : https://practice.geeksforgeeks.org/problems/adding-ones3628/1

class Solution{
    public:
    void update(int a[], int n, int updates[], int k)
    {
        // Your code goes here
        for(int i=0; i<k;++i)
            ++a[updates[i]-1];
        
        for(int j=1; j<n;++j)
                a[j] += a[j-1];
        
    }
};
