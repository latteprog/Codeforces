import sys

n = int(sys.stdin.readline().split()[0])

col = []
colour = ["C", "M", "Y"]

for _ in range(n):
	str = sys.stdin.readline().split()

	for x in str:
		col.append(x)

if any(x in colour for x in col):
	print "#Color"
else:
	print "#Black&White"