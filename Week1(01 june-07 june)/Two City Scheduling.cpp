class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& cs) {
        sort(begin(cs), end(cs), [](vector<int> &v1, vector<int> &v2) {
    return (v1[0] - v1[1] < v2[0] - v2[1]);
  });
        int res=0;
  for (auto i = 0; i < cs.size() / 2; ++i) {
    res += cs[i][0] + cs[i + cs.size() / 2][1];
  }
  return res;
    }
};
