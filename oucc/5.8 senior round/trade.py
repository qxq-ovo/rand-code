t = int(input())
a = input().split()
a = [int(i) for i in a]
for i in a: 
    lic = int(t/2)
    if (i > lic):
        t += i-lic
print(t)