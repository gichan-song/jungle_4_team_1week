import sys
from typing import MutableSequence
N = int(sys.stdin.readline())
data = [sys.stdin.readline().strip() for _ in range(N)]
for i in range(N):
    data[i] = sys.stdin.readline()

def quick(a, left: int, right: int):
    pl = left
    pr = right
    x = a[right-1]

    while pl <= pr:
        while a[pl] < x: pl += 1
        while a[pr] > x:pr -= 1
        if pl <= pr:
            a[pl], a[pr] = a[pr], a[pl]
            pl += 1
            pr -= 1

    if left < pr:
        quick(a, left, pr)  # pl, pr 교차되자마자 다 넘길거 넘겼으니 나누라는뜻
    if pl < right:
        quick(a, pl, right)

def quick_quick(a):
    quick(a, 0, len(a)-1)

quick_quick(data)
for i in range(N):
    print(data[i][0])
