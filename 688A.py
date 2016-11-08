import sys

[n, d] = [int(x) for x in sys.stdin.readline().split()]
res = 0
cnt = 0

for _ in range(d):
	str = sys.stdin.readline().split()[0]

	if str == ("1" * n):
		res = max(res, cnt)
		cnt = 0
	else:
		cnt += 1

print max(res, cnt)