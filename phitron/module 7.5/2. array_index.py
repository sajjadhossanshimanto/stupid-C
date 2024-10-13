input()
arr = list(map(int, input().split(" ")))
x = int(input())

try:
    print(arr.index(x))
except ValueError:
    print(-1)