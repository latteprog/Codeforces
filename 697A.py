import sys

[t, s, x] = [int(x) for x in sys.stdin.readline().split()]

if x < t:
	print "NO"
elif x == t:
	print "YES"
elif x < t + s:
	print "NO"
else:
	x -= t

	if x % s == 0 or x % s == 1:
		print "YES"
	else:
		print "NO"