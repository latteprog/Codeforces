import sys

def fit(a, b):
	# print a, b
	shift = sorted([a[0] - b[0], a[1] - b[1], a[2] - b[2]])[1]
	# print shift
	b = map(lambda x: x + shift, b)
	bm = min([x - y for x, y in zip(b, a)])

	if bm < 0:
		b = map(lambda x: x - bm, b)
	# print b

	return sum(abs(x - y) for x, y in zip(a, b))


patt = [(0, 0, 0), (-1, 0, 0), (-1, -1, 0), (-1, 0, -1), (0, 0, -1), (0, -1, -1), (0, -1, 0)]

[a, b, c] = [int(x) for x in sys.stdin.readline().split()]
res = 5000000000000000000

for x in patt:
	res = min(res, fit([a, b, c], x))

print res