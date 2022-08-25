a = input()
ans = ""
idx = 0
while idx < len(a):
    cnt = 0
    j = idx
    while(j<len(a) and a[j]==a[idx]): 
        j+=1 
        cnt+=1
    ans += a[idx] + str(cnt)
    idx = j
print(ans)