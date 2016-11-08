import sys

n = int(sys.stdin.readline().split()[0])
changed = 0
out = []

for _ in range(n):
	str = sys.stdin.readline().split("|")

	if str[0] == "OO" and changed == 0:
		str[0] = "++"
		changed = 1

	if str[1] == "OO\n" and changed == 0:
		str[1] = "++"
		changed = 1

	out.append("|".join(str))

if changed == 1:
	print "YES"
	
	for x in out:
		print x
else:
	print "NO"

