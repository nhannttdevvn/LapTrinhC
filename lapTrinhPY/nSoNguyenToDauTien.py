from math import sqrt

def isPrime(k):
    if k < 2:
        return False
    for i in range(2, int(sqrt(k))+1):
        if k % i == 0:
            return False
    return True

def generatePrimes(n):
    c = 0
    num = 2
    while c < n:
        if isPrime(num):
            print(num, end=' ')
            c += 1
        num += 1

n = int(input("Nhập số nguyên n: "))
generatePrimes(n)
