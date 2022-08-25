a = int(input())
prev = int(input())
ans = 0
for i in range (a-1):
    num = int(input())
    if(num>prev):
        ans+=1
    prev = num
print(ans*100)

