class Solution {
public:
    void sortColors(vector<int>& nums) {
        ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
        int n=nums.size();
        int l=0,r=n-1;
        for(int i=0;i<n;i++){
            if(nums[i]==2 && r!=i) 
                swap(nums[i--],nums[r--]);
            else if(nums[i]==0 && l!=i)
                swap(nums[i--],nums[l++]);
            if(i>=r)
                break;
        }
    }
};
