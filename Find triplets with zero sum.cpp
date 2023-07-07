// https://practice.geeksforgeeks.org/problems/find-triplets-with-zero-sum/1

class Solution{
  public:
    //Function to find triplets with zero sum.
    bool findTriplets(int arr[], int n)
    { 
        //Your code here
        sort(arr,arr+n);
          for(int i=0;i<n;i++)
        {
            int j=i+1,k=n-1;
            while(j<k)
            {
                if(arr[i]+arr[j]+arr[k]==0)
                    return true;
                else if(arr[i]+arr[j]+arr[k]>0)
                    k--;
                else
                    j++;
            }
        }
        return false;
    }
};
