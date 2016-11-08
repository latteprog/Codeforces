import sys

c = int(sys.stdin.readline().split()[1])
inp = [int(x) for x in sys.stdin.readline().split()]
inp.reverse()

i = 0

while i < len(inp) - 1:
	if inp[i] - inp[i + 1] > c:
		break
	else:
		i += 1

print i + 1
