class Solution {
public:
    string getPermutation(int n, int k) {
        ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
        string res="";
        for(int i=1;i<=n;i++){
            res+=to_string(i);
        }
        for(int i=1;i<k;i++){
            next_permutation(res.begin(),res.end());
        }
        return res;
    }
};
