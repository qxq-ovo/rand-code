pwd = " abcdefghijklmnopqrstuvwxyz"
ans=''
number = list(map(int, input().split()))
for i in number:
    ans+=pwd[i]
print(ans)

