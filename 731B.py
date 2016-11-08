import sys

sys.stdin.readline()
inp = [int(x) for x in sys.stdin.readline().split()]

inp[0] %= 2

for i in range(0, len(inp) - 1):
	inp[i] %= 2

	if inp[i] == 1:
		inp[i] = 0

		if inp[i + 1] == 0:
			print "NO"
			sys.exit(0)

		inp[i + 1] -= 1

if inp[-1] % 2 == 0:
	print "YES"
else:
	print "NO"
