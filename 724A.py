import sys

days = ["monday", "tuesday", "wednesday", "thursday", "friday", "saturday", "sunday"]

a = sys.stdin.readline().split()[0]
b = sys.stdin.readline().split()[0]

if any((days.index(b) - days.index(a) + 7) % 7 == x for x in [0, 2, 3]):
	print "YES"
else:
	print "NO"
