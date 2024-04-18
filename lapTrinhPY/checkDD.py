def checkDD(array):
  for i in range(n-1):
    if array[i] * array[i+1] >= 0:
      return False
  return True

if checkDD(array):
  print("YES")
else:
  print("NO")