import sys

sys.stdin.readline()
inp = [int(x) for x in sys.stdin.readline().split()]

res = 0
cnt = 0
cur = -1

for x in inp:
	if cur < x:
		cnt += 1
		cur = x
	else:
		res = max(res, cnt)
		cur = x
		cnt = 1

res = max(res, cnt)

print res