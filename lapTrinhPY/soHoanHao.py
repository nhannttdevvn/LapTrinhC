
n = int(input("Nhập vào số phần tử của mảng: "))
array = []

for i in range(n):
  array.append(int(input("Nhập vào phần tử thứ %d: " %(i))))


def  checkPerfect(n):
    if n <= 1:
        return False
    sum=0
    for i in range(1,n):
        if n%i == 0:
            sum+=i
    return sum==n

for i in range (n):
  if (checkPerfect(array[i])):
    print('Cac phan tu: ', array[i], end=' ')