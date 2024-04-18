from math import sqrt

def checkPrime(k):
    if (k < 2):
        return False
    c=0
    for i in range(2, int(sqrt(k))+1):
        if k%i==0:
            c+=1
    return c==0 
n = int(input()) 
    