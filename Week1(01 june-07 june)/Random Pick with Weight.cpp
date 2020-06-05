class Solution {
public:
    vector<int> s;
    Solution(vector<int>& w) {
        for (int e : w){
            if(s.empty())
                s.push_back(e);
            else
                s.push_back(e + s.back());
        }
    }
    
    int pickIndex() {
        ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
        int x = s.back();
        int index = rand() % x;
        auto it = upper_bound(s.begin(), s.end(),index);
        return it - s.begin();
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */
