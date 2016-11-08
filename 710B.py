import sys

sys.stdin.readline()
inp = [int(x) for x in sys.stdin.readline().split()]
inp.sort()

print inp[(len(inp) - 1) / 2]
