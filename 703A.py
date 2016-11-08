import sys

n = int(sys.stdin.readline().split()[0])
mW = 0
cW = 0

for _ in range(n):
	[m, c] = [int(x) for x in sys.stdin.readline().split()]

	if m > c:
		mW += 1
	elif c > m:
		cW += 1

if mW > cW:
	print "Mishka"
elif cW > mW:
	print "Chris"
else:
	print "Friendship is magic!^^"