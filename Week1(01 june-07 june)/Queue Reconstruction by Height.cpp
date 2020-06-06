class Solution {
public:
    static bool comp(const vector<int>& a,const vector<int>& b){
        return (a[0] > b[0] || (a[0] == b[0] && a[1] < b[1]));
    }
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
        vector<vector<int>>result;
        sort(people.begin(),people.end(),comp);
        for(vector<int>& x: people) result.insert(result.begin() + x[1], x);
        return result;
    }
};
