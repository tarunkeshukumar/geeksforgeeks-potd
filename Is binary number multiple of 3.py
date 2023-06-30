// problem link : https://practice.geeksforgeeks.org/problems/is-binary-number-multiple-of-30654/1

class Solution:
	def isDivisible(self, s):
		# code here
		pos = 0
		for i in range(0,len(s)):
		    if(s[i]=='1'):
		        if(i%2==0):
		            pos+=1
		        else:
		            pos-=1
		 
        return int(pos%3==0)
