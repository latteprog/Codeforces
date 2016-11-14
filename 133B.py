import sys

inp = sys.stdin.readline().split()[0]

alphabet = {
	">": 8,
	"<": 9,
	"+": 10,
	"-": 11,
	".": 12,
	",": 13,
	"[": 14,
	"]": 15,
}

res = 0

for x in inp:
	res *= 16
	res %= 1000003
	res += alphabet[x]

print res % 1000003