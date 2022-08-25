message = input()
rail1 = ''
rail2 = ''
rail3 = ''
r = 0

for letter in message:
    if r%4 == 0:
        rail1 = rail1 + letter
    elif (r+2)%4 == 0:
        rail3 = rail3 + letter
    else:
        rail2 = rail2 + letter
    r +=1

print(rail1 + rail2 + rail3)
