import sys

[a, b] = [int(x) for x in sys.stdin.readline().split()]
res = []

while b > a:
	res.append(b)

	if b % 2 == 0:
		b /= 2
	elif b % 10 == 1:
		b /= 10
	else:
		break

if b != a:
	print "NO"
	sys.exit(0)

res.append(a)
res.reverse()

print "YES"
print len(res)
print ' '.join([str(x) for x in res])



