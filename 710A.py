import sys

corner = ["a1", "a8", "h1", "h8"]

inp = sys.stdin.readline().split()[0]

if inp in corner:
	print 3
elif inp[0] == 'a' or inp[0] == 'h' or inp[1] == '1' or inp[1] == '8':
	print 5
else:
	print 8