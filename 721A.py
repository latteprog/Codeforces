import sys

sys.stdin.readline()
str = sys.stdin.readline().split()[0]

res = [len(x) for x in str.split("W")]
res = filter(lambda x: x > 0, res)

print len(res)

for x in res:
	print x,