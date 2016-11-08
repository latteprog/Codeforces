import sys
import math

def dist(x1, y1, x2, y2):
	return math.sqrt((x1 - x2) ** 2 + (y1 - y2) ** 2)

[a, b] = [int(x) for x in sys.stdin.readline().split()]
n = int(sys.stdin.readline().split()[0])
inp = []

for _ in range(n):
	inp.append([int(x) for x in sys.stdin.readline().split()])

t = map(lambda x: (dist(x[0], x[1], a, b) / x[2]), inp)

print min(t)