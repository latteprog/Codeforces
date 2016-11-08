import sys

[n, x, y] = [int(x) for x in sys.stdin.readline().split()]
res = 0

dp = [0] * (n + 1)

for i in range(1, n + 1):
	if i % 2 == 0:
		dp[i] = min(dp[i / 2] + y, dp[i - 1] + x)
	else:
		dp[i] = min(dp[(i + 1) / 2] + x + y, dp[i - 1] + x)

print dp[n]