n = int(input())
tri = []  #삼각형을 이루는 정수값 입력용 리스트

for _ in range(n):
    tri.append(list(map(int,input().split())))
    

for i in range(1,n):
    for j in range(len(tri[i])):
        if j==0:
            tri[i][j] += tri[i-1][0]
            
        elif j == len(tri[i])-1:
            tri[i][j] += tri[i-1][-1]
            
        else:
            tri[i][j] += max(tri[i-1][j],tri[i-1][j-1])
            
print(max(tri[n-1]))