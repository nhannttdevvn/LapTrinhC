print("Nhập vào mảng, mỗi số cách nhau 1 dấu cách:")
array = []
array = [x for x in input().strip().split()]
for i in array:
  print(i, end = " ")