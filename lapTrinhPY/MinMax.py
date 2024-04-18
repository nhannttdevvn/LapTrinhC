"""
 * Chương trình nhập một số nguyên n và mảng gồm n số nguyên
 * sau đó in ra giá trị nhỏ nhất và lớn nhất của mảng trên cùng dòng,
 * cách nhau bởi một khoảng trống. Cần giữ khung chương trình.
"""
n = int(input("Nhập vào số phần tử của mảng: "))
array = []
for i in range(n):
  array.append(int(input("Nhập vào phần tử thứ %d: " %(i))))

def findMin(array,n):
    minA = array[0]
    for i in range(n):
        if array[i] < minA:
            minA = array[i]
    return minA

def findMax(array,n):
    maxA = array[0]
    for i in range(n):
        if array[i] > maxA :
            maxA = array[i]
    return maxA

a=findMax(array,n)
b=findMin(array,n)
print(b, a)