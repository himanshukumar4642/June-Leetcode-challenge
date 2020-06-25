class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        ios_base::sync_with_stdio(0);cin.tie(0);
        int t = nums[0], h = nums[0];
        do
        {
            //cout<<t<<h<<" ";
            t = nums[t];
            h = nums[nums[h]];
        } while(t != h);
        //cout<<"\n";
        t = nums[0];
        while(t != h)
        {
            //cout<<t<<h<<" ";
            t = nums[t];
            h = nums[h];
        }
        return h;
    }
};
