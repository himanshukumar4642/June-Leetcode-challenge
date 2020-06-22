class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res=0;
        for(int i=0;i<32;i++){
            int cnt=0;
            for(int x:nums){
                cnt+=(x>>i)&1;
            }
            res=res|((cnt%3)<<i);
        }
        return res;
    }
};
