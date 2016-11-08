import sys

vowels = ["A", "E", "I", "O", "U", "Y"]

str = sys.stdin.readline().split()[0]
inp = [[x, i] for i, x in enumerate(str)]
inp = filter(lambda x: x[0] in vowels, inp)
cal = []

for i in range(1, len(inp)):
	cal.append(inp[i][1] - inp[i - 1][1])

if len(inp) == 0:
	print len(str) + 1
else:
	print max(cal + [inp[0][1] + 1, len(str) - inp[-1][1]])