import sys

[k2, k3, k5, k6] = [int(x) for x in sys.stdin.readline().split()]

k256 = min(k2, k5, k6)

k2 -= k256
k5 -= k256
k6 -= k256

k32 = min(k2, k3)

print k256 * 256 + k32 * 32