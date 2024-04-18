# decimal_number =int(input('Nhap n='))
# hex_number = hex(decimal_number)[2:]       #10 sang 16
# print(f"Số {decimal_number} trong hệ cơ số 16 là: {hex_number}")





# hex_number = input("Nhập số hex: ")          #16 sang 10
# decimal_number = int(hex_number, 16)
# print(f"Số {hex_number} trong hệ cơ số 10 là: {decimal_number}")




# binary_number = input('Nhap n=')
# decimal_number = int(binary_number, 2) 
# hex_number = hex(decimal_number)[2:] 
# print(f"Số {binary_number} trong hệ cơ số 16 là: {hex_number}")     #2 sang 16




# hex_number = input("Nhập số hex: ")
# decimal_number = int(hex_number, 16)
# binary_number = bin(decimal_number)[2:]
# print(f"Số {hex_number} trong hệ cơ số 2 là: {binary_number}")  #16 sang 2





# decimal_number = float(input("Nhập số thập phân: "))    #10 sang 2
# integer_part = bin(int(decimal_number))[2:]
# fractional_part = ""
# fractional_value = decimal_number - int(decimal_number)
# bit_count = 8
# for _ in range(bit_count):
#     fractional_value *= 2
#     fractional_part += str(int(fractional_value))
#     fractional_value -= int(fractional_value)
# fractional_part = fractional_part.rstrip('0')
# binary_number = f"{integer_part}.{fractional_part}"
# print(f"Số {decimal_number} trong hệ cơ số 2 là: {binary_number}")



# binary_number = input("Nhập số nhị phân: ")
# decimal_number = int(binary_number, 2)
# print(f"Số {binary_number} trong hệ cơ số 10 là: {decimal_number}")   (2 sang 10)