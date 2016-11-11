import sys

sys.stdin.readline()
inp = [int(x) for x in sys.stdin.readline().split()]
arr = [[] for _ in range(2)]

for i, x in enumerate(inp):
	arr[x % 2].append(i + 1)

if len(arr[0]) == 1:
	print arr[0][0]
else:
	print arr[1][0]