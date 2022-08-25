a,b = map(int,input().split())
tmp = 0
if(b>a):
  tmp = a
  a = b
  b = tmp

print(int(a/b),a%b)