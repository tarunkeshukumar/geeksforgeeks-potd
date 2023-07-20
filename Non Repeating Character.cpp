// https://practice.geeksforgeeks.org/problems/non-repeating-character-1587115620/1

class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string S)
    {
       //Your code here
       unordered_map<char ,int > m;
       for(auto i : S)
           m[i]++;
       
       for(auto x : S)
           if(m[x] == 1)
               return x;
       return '$';
    }
};
