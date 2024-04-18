#Chương trình kiểm tra dãy tăng
def checkTang(array):
  for i in range(n-1):
    if array[i] > array[i+1]:
      return False;
  return True
n = int(input()) 
array = []
for i in range(n):
  array.append(int(input()))
if checkTang(array):  
    print("YES")
else:
    print("NO")
