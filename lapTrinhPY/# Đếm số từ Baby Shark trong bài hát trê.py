
f = open("baby_shark.txt",'r')

ds = f.readlines() 
print(len(ds))

count = 0
for item in ds:
    if "babyshark".upper() in item.upper():
        count += 1

# print("babyshark".upper() )
print(count)

print(ds.count("Baby Shark"))