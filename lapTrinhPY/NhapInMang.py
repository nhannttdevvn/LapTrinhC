n = int(input("Nhập vào số phần tử của mảng: "))

array = []

for i in range(n):
  array.append(int(input("Nhập vào phần tử thứ %d: " %(i))))

for i in range(n):
  print(array[i], end = " ")