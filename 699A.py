import sys

n = int(sys.stdin.readline().split()[0])
str = sys.stdin.readline().split()[0]
x = [int(y) for y in sys.stdin.readline().split()]
res = 1000000000

for i in range(1, n):
	if str[i] == 'L' and str[i - 1] == 'R':
		res = min(res, (x[i] - x[i - 1]) / 2)

if res == 1000000000:
	print -1
else:
	print res
