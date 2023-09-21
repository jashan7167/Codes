a = int(input("Enter the no of rows: "))

for i in range(a):
    print(" "*(a-i) + " *"*(i+1))

for j in range(a):
    print(" "*(j+1) + " *"*(a-j))