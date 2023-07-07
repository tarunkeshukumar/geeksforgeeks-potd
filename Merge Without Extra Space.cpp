// problem link : https://practice.geeksforgeeks.org/problems/merge-two-sorted-arrays-1587115620/1

class Solution{
    public:
        //Function to merge the arrays.
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            // code here 
            int i=0,j=0,k=0;
           
            for( i=0,j=0,k=n-1;i<n && j<m && i<=k; ){
                if(arr1[i]>=arr2[j]){
                    swap(arr1[k],arr2[j]);
                    --k;
                    ++j;
                }
                else
                    ++i;
            }
            sort(arr1,arr1+n);
            sort(arr2,arr2+m);
        } 
};
