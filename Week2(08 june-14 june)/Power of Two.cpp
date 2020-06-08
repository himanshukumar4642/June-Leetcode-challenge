class Solution {
public:
    bool isPowerOfTwo(int n) {
        ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
         if(n <= 0)              
		 	return false;
        else 
		    return !(n & (n-1));
    }
};
