import sys

sys.stdin.readline()
inp = sys.stdin.readline().split()[0]

c = 0

while c < len(inp):
	if inp[c] == '<':
		c += 1
	else:
		break

d = len(inp) - 1

while d >= 0:
	if inp[d] == '>':
		d -= 1
	else:
		break

print c + (len(inp) - 1 - d)