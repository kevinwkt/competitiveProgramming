#!/bin/python3
x, initialBase, finalBase = input().split()
re_x = int(x,int(initialBase))
ans = ""
while re_x:
    print("Current re_x: "+ str(re_x)+" re_x%int(finalbase): "+ str(re_x%int(finalBase)))
    ans=str(re_x%int(finalBase))+ans
    re_x//=int(finalBase)
print(ans)

