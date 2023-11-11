t=int(input())
for testid in range(t):
	n=int(input())
	a=list(map(int,input().split()))
	sm=sum([abs(v) for v in a])
	ops=0
	i=0
	while i<n:
		if a[i]>=0:
			i+=1
			continue
		j=i+1
		while j<n and a[j]<=0:j+=1
		i=j
		ops+=1
	print(sm,ops)

