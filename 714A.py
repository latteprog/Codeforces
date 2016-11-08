import sys

[l1, r1, l2, r2, k] = [int(x) for x in sys.stdin.readline().split()]

l = max(l1, l2)
r = min(r1, r2)

if l > r:
	print 0
else:
	if l <= k and k <= r:
		r -= 1

	print r - l + 1