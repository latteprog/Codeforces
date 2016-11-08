import sys

n = int(sys.stdin.readline().split()[0])

even = range(2, n * n, 2)
odd = range(1, n * n + 1, 2)

for i in range(n):
	for j in range(n):
		if abs(n / 2 - i) + abs(n / 2 - j) <= n / 2:
			print odd[-1],
			odd = odd[: -1]
		else:
			print even[-1],
			even = even[: -1]

	print ""

