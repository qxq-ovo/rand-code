m,hlife,n = map(int,input().split(" "))
for i in range(n):
    m/=2
print(hlife*n)
print("%.4f" % m)