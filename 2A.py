import sys

n = int(sys.stdin.readline().split()[0])
scores = {}
updates = []

for t in range(n):
	[name, score] = sys.stdin.readline().split()
	score = int(score)

	if name not in scores:
		scores[name] = 0

	scores[name] += score
	updates.append((name, scores[name]))

maxscore = scores[max(scores, key=lambda x: scores[x])]

updates = filter(lambda x: scores[x[0]] == maxscore, updates)
updates = filter(lambda x: x[1] >= maxscore, updates)
print updates[0][0]