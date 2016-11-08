import sys

sys.stdin.readline()
inp = [int(x) for x in sys.stdin.readline().split()]

if inp[-1] == 15:
	print "DOWN"
elif inp[-1] == 0:
	print "UP"
elif len(inp) > 1:
	if inp[-2] < inp[-1]:
		print "UP"
	else:
		print "DOWN"
else:
	print -1