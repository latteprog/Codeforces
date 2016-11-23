import sys

sys.stdin.readline()
str = sys.stdin.readline().split()[0]

if str.count('D') > str.count('A'):
	print "Danik"
elif str.count('D') < str.count('A'):
	print "Anton"
else:
	print "Friendship"