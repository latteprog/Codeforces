import sys

k = int(sys.stdin.readline().split()[1])
inp = [int(x) for x in sys.stdin.readline().split()]
res = 0

for i in range(1, len(inp)):
	if inp[i - 1] + inp[i] < k:
		res += k - (inp[i] + inp[i - 1])
		inp[i] += k - (inp[i] + inp[i - 1])

print res

for x in inp:
	print x,