import sys

def dist(a, L):
	return min(abs(a - min(L)), abs(a - max(L))) + max(L) - min(L)

[n, a] = [int(x) for x in sys.stdin.readline().split()]
inp = [int(x) for x in sys.stdin.readline().split()]
inp.sort()

if len(inp) == 1:
	print 0
else:
	print min(dist(a, inp[:-1]), dist(a, inp[1:]))