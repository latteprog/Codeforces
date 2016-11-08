import sys

str = sys.stdin.readline().split()[0]
res = min(ord(str[0]) - ord('a'), 26 - (ord(str[0]) - ord('a')))

for i in range(1, len(str)):
	res += min(abs(ord(str[i]) - ord(str[i - 1])), 26 - abs(ord(str[i]) - ord(str[i - 1])))

print res