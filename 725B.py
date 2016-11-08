import sys

time = {
	'a': 4,
	'b': 5,
	'c': 6,
	'd': 3,
	'e': 2,
	'f': 1
}

inp = sys.stdin.readline().split()[0]

n = int(inp[:-1]) - 1
s = inp[-1]

res = (n / 4) * 16
n %= 2

if n == 1:
	res += 7
	n = 0

print res + time[s]

