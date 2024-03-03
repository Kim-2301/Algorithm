from collections import deque
n,m,v = map(int, input().split(' '))

g=[[False]*(n+1) for _ in range(n+1)] # 탐색용 그래프 배열 false 초기화
bfs_vis = [False]*(n+1) #bfs용 방문 체크 
dfs_vis = [False]*(n+1) #dfs용 방문 체크


for _ in range(m):
    a,b = map(int,input().split(' '))
    g[a][b] = True
    g[b][a] = True

def bfs(v):
    q = deque([v])
    bfs_vis[v]=True
    while q:
        v = q.popleft()
        print(v,end=' ')
        for i in range(n+1):
            if bfs_vis[i] == False and g[v][i] == True :
                q.append(i)
                bfs_vis[i] = True

def dfs(v,cnt):
    dfs_vis[v] = True
    print(v,end=' ')
    if cnt == n: return 
    for i in range(n+1):
        if dfs_vis[i]== False and g[v][i] == True :
            cnt += 1
            dfs(i,cnt)
                 
dfs(v,0)
print("")
bfs(v)