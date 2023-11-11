t=int(input())
for testid in range(t):
	n=int(input())
	a=list(map(int,input().split()))
	a.sort()
	print(sum(a[(n+1)//2:])-sum(a[:n//2]))
