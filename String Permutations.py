# https://practice.geeksforgeeks.org/problems/permutations-of-a-given-string-1587115620/1

from itertools import permutations
class Solution:
    def permutation(self,s):        
        return sorted([''.join(i) for i in permutations(s)])
