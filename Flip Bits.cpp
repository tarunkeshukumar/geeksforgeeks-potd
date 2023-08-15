// https://practice.geeksforgeeks.org/problems/flip-bits0240/1

class Solution{
    public:
    int maxOnes(int a[], int n)
    {
        // Your code goes here
        int maxi= 0,one=0,temp=0;
        
        for(int i=0;i<n;i++){
            if(temp<0)
                temp=0;
            if(a[i]==1){
                --temp;
                ++one;
            }
            else
                temp++;
            
            maxi = max(temp,maxi);
    }
    return maxi+one;
    }
};
