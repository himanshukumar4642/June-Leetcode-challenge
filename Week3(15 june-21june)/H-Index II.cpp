class Solution {
public:
    int hIndex(vector<int>& c) {
        ios_base::sync_with_stdio(0);cin.tie(0);
        int n=c.size();
        int l=0,r=n-1;
        while(l <= r){
            int mid = l + (r - l)/2;
            if(c[mid] >= n-mid)
                r = mid - 1;
            else
                l = mid + 1;
        }
        return n - l;
    }
};
