

n = int(input("Enter the no of times you want to print: "))

for i in range(n):
    for j in range(i,0,-1):
        print(pow(2,j-1),end=" ")
    print("\n")
