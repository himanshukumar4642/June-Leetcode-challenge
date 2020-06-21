class Solution {
public:
    int calculateMinimumHP(vector<vector<int>>& dungeon) {
        if(dungeon.empty())
      return 0;
      int m=dungeon.size();
      int n=dungeon[0].size();
        
        if(m==0 || n==0)
            return 0;
        vector<vector<int> > dp( m , vector<int> (n, 0));
        
        for(int i=m-1;i>=0;i--)
            for(int j=n-1;j>=0;j--)
            {
                
              if(i==m-1 and j==n-1)
              {
                dp[i][j]=min(0,dungeon[i][j]);  
              }
              else if(i==m-1)
              {
                 dp[i][j]=min(0,dungeon[i][j]+dp[i][j+1]);  
              }
              else if(j==n-1)
              {
              dp[i][j]=min(0,dungeon[i][j]+dp[i+1][j]);
              }
              else {
                     dp[i][j]=min(0,max(dungeon[i][j]+dp[i][j+1],dungeon[i][j]+dp[i+1][j]));//Here the min is to check for the negative value and max function is to go for the optimum path
                   }
                
            }
        
        
        return dp[0][0]*-1+1;
    }
};
