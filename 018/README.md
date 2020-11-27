##dp
regard the shape as a triangle.<br>
	
	*
	**
	***
	****
	*****

dp[i][j] = max(dp[i - 1][j - 1], dp[i - 1][j]) + num[i][j]

