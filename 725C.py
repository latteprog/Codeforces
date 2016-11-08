import sys

str = sys.stdin.readline().split()[0]

for i in range(26):
	if str[i] == str[i + 1]:
		print "Impossible"
		sys.exit(0)

first = [-1] * 500
grid = [[], []]
grid0 = 0
grid1 = 0
fb = -1
lb = 27

for i, x in zip(range(27), str):
	if first[ord(x)] == -1:
		first[ord(x)] = i
	else:
		if (i - first[ord(x)]) % 2 == 0:	# odd characters in between
			# xxx.
			# xxx

			if (i - first[ord(x)]) == 2:
				grid[0].append(str[first[ord(x)] + 1: i + 1])
				grid0 = len(str[first[ord(x)] + 1: i + 1])
				fp = first[ord(x)] - 1
				lp = i + 1
			else:
				tmp = str[first[ord(x)] + 1: first[ord(x)] + (i - first[ord(x)]) / 2 + 1]
				tmp = tmp[::-1]
				grid[0].append(tmp)
				grid0 = len(tmp)
				tmp = str[first[ord(x)] + (i - first[ord(x)]) / 2 + 1: i + 1]
				grid[1].append(tmp)
				grid1 = len(tmp)
				fp = first[ord(x)] - 1
				lp = i + 1

			while fp != fb or lp != lb:
				# print fp, lp, grid0, grid1
				if grid0 != 13:
					if fp != fb:
						grid[0].append(str[fp])
						fp -= 1
						grid0 += 1
					else:
						grid[0].append(str[lb - 1])
						lb -= 1
						grid0 += 1
				else:
					if lp != lb:
						grid[1].append(str[lp])
						lp += 1
						grid1 += 1
					else:
						grid[1].append(str[fb + 1])
						fb += 1
						grid1 += 1
		else:	# even characters in between
			# xxx.
			# xxx
			if (i - first[ord(x)]) == 3:
				grid[0].append(str[first[ord(x)] + 1])
				grid[0].append(str[i])
				grid0 = 2
				grid[1].append(str[first[ord(x)] + 2])
				grid1 = 1
				fp = first[ord(x)] - 1
				lp = i + 1
			else:
				tmp = str[first[ord(x)] + 1: first[ord(x)] + (i - first[ord(x)]) / 2 + 1]
				tmp = tmp[::-1]
				grid[0].append(tmp)
				grid[0].append(str[i])
				grid0 = len(tmp) + 1
				tmp = str[first[ord(x)] + (i - first[ord(x)]) / 2 + 1: i]
				grid[1].append(tmp)
				grid1 = 1
				fp = first[ord(x)] - 1
				lp = i + 1

			while fp != fb or lp != lb:
				# print fp, lp, grid0, grid1
				if grid0 != 13:
					if fp != fb:
						grid[0].append(str[fp])
						fp -= 1
						grid0 += 1
					else:
						grid[0].append(str[lb - 1])
						lb -= 1
						grid0 += 1
				else:
					if lp != lb:
						grid[1].append(str[lp])
						lp += 1
						grid1 += 1
					else:
						grid[1].append(str[fb + 1])
						fb += 1
						grid1 += 1



print "".join(grid[0])
print "".join(grid[1])