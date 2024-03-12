n=int(input())
dp=[0]*n
arr = list(map(int,input().split()))
    
dp[0] = arr[0]

for i in range(1,n):
    if dp[i-1] + arr[i] > 0:
        dp[i] = dp[i-1]+arr[i]
        arr[i] = dp[i-1]+arr[i]
    else :
        dp[i] = 0

print(max(arr))