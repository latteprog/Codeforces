import sys

left = [1, 4, 7, 0]
right = [3, 6, 9, 0]
top = [1, 2, 3]
bot = [7, 0, 9]

sys.stdin.readline()
inp = [int(x) for x in sys.stdin.readline().split()[0]]

if any(x in left for x in inp) and any(x in right for x in inp) and any(x in top for x in inp) and any(x in bot for x in inp):
	print "YES"
else:
	print "NO"