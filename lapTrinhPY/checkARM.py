def checkArm(n):
    x=n//100
    y=(n//10)%10
    z=n%10
    if (x*x*x+y*y*y+z*z*z==n):
        return True 
    else: return False

n=int(input('Nhap n='))
while(n<=100 or n>=1000):
   n=int(input('Nhap n='))
print(checkArm(n))    

print('So nho hon hoac bang n: ')
for i in range(1,1000):
    if (i<=n and checkArm(i)):
        print(i, end=' ')