a = int(input())
check = [0,0,0,0,0,0,0,0,0,0]
for i in range(a):
    lista = input()
    for num in lista:
        check[int(num)]+=1
max_cnt = 0
max_digit = 0
for i in range(10):
    if(check[i]>max_cnt):
        max_cnt = check[i]
        max_digit = i
print(max_digit)
