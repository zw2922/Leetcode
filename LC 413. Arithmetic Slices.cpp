class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& A) {
        int n = A.size(), ret = 0;
        vector<int> dp(n,0);
        for(int i=2; i<n; i++){
            if((A[i]-A[i-1])==(A[i-1]-A[i-2])){
                dp[i] = dp[i-1]+1;
                ret += dp[i];
            }
        }
        return ret;
    }
};
