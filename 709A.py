import sys

[n, b, d] = [int(x) for x in sys.stdin.readline().split()]
inp = [int(x) for x in sys.stdin.readline().split()]
inp = filter(lambda x: x <= b, inp)

cnt = 0
res = 0

for x in inp:
	cnt += x

	if cnt > d:
		res += 1
		cnt = 0

print res