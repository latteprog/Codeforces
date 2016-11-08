import sys

sys.stdin.readline()
a = [int(x) for x in sys.stdin.readline().split()]

for i in range(len(a) - 1):
	print a[i] + a[i + 1],

print a[-1]