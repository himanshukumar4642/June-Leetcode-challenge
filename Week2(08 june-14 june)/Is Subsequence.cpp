class Solution {
public:
    int LCS(string t,string s,int m,int n){
        int dp[m+1][n+1];
        for(int i=0;i<=m;i++){
            for(int j=0;j<=n;j++){
                if(i==0||j==0)
                    dp[i][j]=0;
                else{
                    if(t[i-1]==s[j-1]){
                        dp[i][j]=1+dp[i-1][j-1];
                    }else{
                        dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                    }
                }
            }
        }
        return dp[m][n];
    }
    bool isSubsequence(string s, string t) {
        ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
        int n=s.length(),m=t.length();
        return n==LCS(t,s,m,n);
    }
};
