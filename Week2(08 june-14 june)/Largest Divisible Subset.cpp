class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
        if(nums.size()<=1) return nums;
        sort(nums.begin(),nums.end());
        vector<int>parent(nums.size(),-1);
        vector<int>dp(nums.size(),1);
        int maxlength=0;int pos=0;
        for(int i=1;i<nums.size();i++)
        {
            for(int j=i-1;j>=0;j--)
            {
            if(nums[i]%nums[j]==0) dp[i]=max(dp[i],1+dp[j]);
            if(dp[i]==1+dp[j]) parent[i]=j;
        }
     if(dp[i]>maxlength)
     {
         maxlength=dp[i];
         pos=i;
     }
 }
 vector<int>result(maxlength);
 for(int i=maxlength-1;i>=0;i--)
 {
     result[i]=nums[pos];
     pos=parent[pos];
 }
return result;
    }
};
