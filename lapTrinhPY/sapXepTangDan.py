"""
 * Nhập số nguyên N và một mảng A gồm N số nguyên từ bàn phím
 * Sắp xếp A tăng dần về giá trị và in ra mảng đã sắp xếp
"""
N = int(input()) 
array = []
for i in range(N):
  array.append(int(input()))
for i in range(N-1):
  for j in range(i+1, N):
    if(array[i] > array[j]):
      a = array[i]
      array[i] = array[j]
      array[j] = a
for i in range(N):
  print(array[i], end=" ")