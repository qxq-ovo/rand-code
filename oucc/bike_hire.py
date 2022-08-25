n = int(input())
x = []
if(n==0):
    print(0)
else:
    for i in range(n):
        a,b = map(int, input().split())
        x.append([a,b])
    x.sort(key = lambda x:x[0])
    tmp = x[0]
    cnt = 0
    for i in range(1,len(x),1):
        if(x[i][0]>=tmp[0]+tmp[1]):
            cnt += 1 
            tmp = x[i]
    print(cnt+1)