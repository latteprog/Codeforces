import sys

n = int(sys.stdin.readline().split()[0])
L = 0
R = 0
diff = []

for _ in range(n):
	[l, r] = [int(x) for x in sys.stdin.readline().split()]
	L += l
	R += r

	diff.append(l - r)

opt = abs(L - R)
res = 0

if abs(R - L + 2 * min(diff)) > opt:
	opt = abs(R - L + 2 * min(diff))
	res = diff.index(min(diff)) + 1

if abs(R - L + 2 * max(diff)) > opt:
	opt = abs(R - L + 2 * max(diff))
	res = diff.index(max(diff)) + 1

print res