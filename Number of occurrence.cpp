// https://practice.geeksforgeeks.org/problems/number-of-occurrence2259/1
int occurrence(int a[],int n, int x)
{
      int l = lower_bound(arr, arr+n, x)-arr;
	    int r = upper_bound(arr, arr+n, x)-arr;
	    return r-l;
}
