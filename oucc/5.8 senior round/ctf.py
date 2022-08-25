A=input().split()
a_cnt = 0
b_cnt = 0
a_cnt += (int(A[1])-int(A[2])*3)
B=input().split()
b_cnt += (int(B[1])-int(B[2])*3)
A = input().split()
a_cnt += (int(A[1])-int(A[2])*3)
B = input().split()
b_cnt += (int(B[1])-int(B[2])*3)
if(a_cnt>b_cnt):
    print("B")
elif(a_cnt<b_cnt):
    print("A")
else:
    print("draw")