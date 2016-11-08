import sys

sys.stdin.readline()
inp = [int(x) for x in sys.stdin.readline().split()]

if len(inp) == 1:
	if inp[0] == 1:
		print "YES"
	else:
		print "NO"
elif inp.count(0) == 1:
	print "YES"
else:
	print "NO"