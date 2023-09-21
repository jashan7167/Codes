a = 1
b = 11
c = 11
print(a)
print(" ")
for i in range(10):
    str1 = str(b)
    for j in range(len(str1)):  
        print(str1[j],end = " ")
    b = b*c
    print("\n")


