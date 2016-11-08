import sys

n = int(sys.stdin.readline().split()[0])

for i in range(n):
	if i % 2 == 0:
		print "I hate",
	else:
		print "I love",

	if i == n - 1:
		print "it"
	else:
		print "that",