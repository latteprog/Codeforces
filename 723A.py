import sys

inp = [int(x) for x in sys.stdin.readline().split()]
print max(inp) - min(inp)