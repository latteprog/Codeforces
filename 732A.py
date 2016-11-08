import sys

[k, r] = [int(x) for x in sys.stdin.readline().split()]
pos = filter(lambda x: (x * k) % 10 == r or (x * k) % 10 == 0, range(1, 11))
print pos[0]