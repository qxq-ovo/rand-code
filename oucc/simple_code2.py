pwd = " abcdefghijklmnopqrstuvwxyz"
ans=''
number = list(map(int, input().split()))
for i in number:
    ans=ans+pwd[26-i]
print(ans)