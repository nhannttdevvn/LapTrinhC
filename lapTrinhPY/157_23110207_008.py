
from math import sqrt
n = int(input("Nhap vao n=")) 
while(n<0):
   n=int(input('Nhap lai n='))

print("Cac so le tu 1 den n la: ")
for i in range(1,n):
    if(i%2==1):
        print(i, end=' ')

sum=0
for i in range(1,n):
    sum+=i
print("Tong la: ",sum)
 
def checkPrime(n):
    if (n < 2):
        return False
    c=0
    for i in range(2, int(sqrt(n))+1):
        if n%i==0:
            c+=1
    return c==0 

if checkPrime(n):
    print("YES")
else: print("NO")
