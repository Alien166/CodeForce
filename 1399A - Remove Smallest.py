for i in range(int(input())):
	n=int(input())
	seq=set(map(int,input().split()))
	print('YES' if max(seq)-min(seq)<len(seq) else 'NO')
