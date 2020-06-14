class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        ios_base::sync_with_stdio(0);cin.tie(0);
        vector<vector<pair<int, int>>> adj(n);
        for(vector<int>& f : flights )
            adj[f[0]].push_back( { f[1], f[2] } );
        priority_queue<vector<int>,vector<vector<int>>,greater<vector<int>>> minh;
        minh.push({0,src,k+1});
        while(minh.size()>0){
            auto p=minh.top();
            minh.pop();
            int cost=p[0];
            int p1=p[1];
            int p2=p[2];
            if(p1==dst)
                return cost;
            if(p2>0){
                for(pair<int,int> t:adj[p1]){
                    minh.push({cost+t.second,t.first,p2-1});
                }
            }
        }
        return -1;
    }
};
