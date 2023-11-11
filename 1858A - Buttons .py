t=int(input())
for _ in range(t):
  a,b,c=map(int,input().split())
  if a+c%2>b:
    print("First")
  else:
    print("Second")
