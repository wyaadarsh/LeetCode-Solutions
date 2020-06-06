class Solution {
    public int numDecodings(String s) {
        int n = s.length();
        int [] dp = new int[n + 1];
        dp[0] = 1;
        for(int i = 1; i <= n; ++i) {
            if (s.charAt(i - 1) != '0') dp[i] += dp[i - 1];
            if (i > 1 && s.substring(i - 2, i).compareTo("09") > 0 && s.substring(i - 2, i).compareTo("27") < 0)
                dp[i] += dp[i - 2];
        }
        return dp[n];
    }
}
