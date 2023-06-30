// problem link : https://practice.geeksforgeeks.org/problems/is-binary-number-multiple-of-30654/1

class Solution{
public:	
		
	int isDivisible(string s){
	    //complete the function here
	    int pos=0;
	    for(int i=0; i<s.length();++i){
	        if(s[i]=='1'){
	            if(i%2==0)  
	                ++pos;
	            else
	                --pos;
	        }
	    }
	    return pos%3==0;
	}
};
