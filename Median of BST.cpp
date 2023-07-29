// https://practice.geeksforgeeks.org/problems/median-of-bst/1

float findMedian(struct Node *root)
{
      //Code here
      vector<int> v;
      node_count(root,v);
      float ans=0;
      int n=v.size();
      if(n%2==0){
          ans = v[n/2] + v[n/2 - 1];
          ans /=2.0;
      }
      else
        ans = v[n/2];
      return ans;
}
