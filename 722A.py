import sys

lim = int(sys.stdin.readline().split()[0])
[h, m] = [int(x) for x in sys.stdin.readline().split(':')]

if lim == 12:
	if h > 12:
		if h % 10 == 0:
			h = 10
		else:
			h %= 10

	if h == 0:
		h = 1
else:
	if h >= 24:
		h %= 10

if m >= 60:
	m %= 10

print "%02d:%02d" % (h, m)