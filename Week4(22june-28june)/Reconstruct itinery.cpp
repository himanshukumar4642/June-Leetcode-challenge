class Solution {
public:
map<string,multiset<string>> graph;
    vector<string> res;
    void solve(string d){
        while(graph[d].size()){
            auto next = *graph[d].begin();
            graph[d].erase(graph[d].begin());
            solve(next);
        } 
        res.push_back(d);
    }
    vector<string> findItinerary(vector<vector<string>> tickets) {
        for(auto& t: tickets) graph[t[0]].insert(t[1]);
        solve("JFK");
        return vector<string>(res.rbegin(),res.rend());
    }   
};
