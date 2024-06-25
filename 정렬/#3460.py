T = int(input())

for _ in range(T):
    n = int(input())
    arr = []
    while n > 0:
        arr.append(n % 2)
        n = n // 2
    
    result = []
    for index, value in enumerate(arr):
        if value == 1:
            result.append(str(index))

    print(" ".join(result))