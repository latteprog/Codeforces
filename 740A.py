import sys

[n, a, b, c] = [int(x) for x in sys.stdin.readline().split()]

n %= 4

if n == 0:
	print 0
elif n == 1:
	print min(a * 3, a + b, c)
elif n == 2:
	print min(a * 2, b, c * 2)
else:
	print min(a, c * 3, b + c)

'''
===
1 1 3 4
---
3
===
6 2 1 1
---
1
===
4 4 4 4
---
0
===
999999999 1000000000 1000000000 1000000000
---
1000000000
===
'''