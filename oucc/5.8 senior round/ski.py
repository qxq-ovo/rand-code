num = input().split()
num = [int(i) for i in num]
fastest = num[0]
ans = 0
for i in num:
    if i < fastest:
        fastest = i
        ans+=1
print(ans+1)
