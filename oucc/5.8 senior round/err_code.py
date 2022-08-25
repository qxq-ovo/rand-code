n = int(input())
code = input().split()
code = [int(i) for i in code]
m = int(input())
cnt = 0
for i in range(m):
    s = input()
    if(int(s[0]) in code):
        cnt+=1
print(cnt)