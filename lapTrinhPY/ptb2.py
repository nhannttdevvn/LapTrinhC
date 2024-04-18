a=int(input())
b=int(input())
c=int(input())
from math import sqrt
def solver(a,b,c):
    if a==0:
        if (b==0):
            if (c==0):
                print("VSN")
            else: 
                print("VN")
        else: 
            x=-c/b
        print(x)
    else:
        denta=b*b-4*a*c
        if denta==0:
            x=(-b)/2*a
        print(x) 
        if denta < 0:
            print("VN")
        else:
              x1=(-b+sqrt(denta))/2*a
              x2=(-b-sqrt(denta))/2*a
        print(x1,x2)
        
        