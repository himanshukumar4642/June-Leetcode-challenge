class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        ios_base::sync_with_stdio(0);cin.tie(0);
        int n=nums.size();
        if(n==0)
            return 0;
        int l=0,r=n-1;
        if(target<nums[0])
            return 0;
        if(target>nums[n-1])
            return n;
        while(l<=r){
            int mid=(l+r)/2;
            if(nums[mid]==target){
                return mid;
            }else if(mid!=0 && nums[mid-1]<target && nums[mid]>target)
                return mid;
            else if(mid!=n-1 && nums[mid]<target && nums[mid+1]>target)
                return mid+1;
            else if(target>nums[mid])
                l=mid+1;
            else
                r=mid-1;
        }
        return 0;
    }
};
