j = 1
while 1:
    try:
        line = raw_input()
        cases=input()
        count=1
        for i in range(cases):
            print("Case 1:"+str(count))
            cond=1
            a=input()
            b=input()
            if (a>b):
                t=b
                b=a
                a=t
            for j in range(a,b,1):
                if(line[j]!=line[j+1]):
                    cond=0
            if(cond):
                print("Yes")
            else:
                print("No")
            count=count+1
    except EOFError: break