
arr = []
n =int( input("Enter the no of values you want to store in the array: "))

for i in range(n):
    val = int(input("Enter the value: "))
    arr.append(val)


for i in range(1,len(arr)):
    
    key = arr[i]
    j = i -1
    while j>=0 and key<arr[j]:
        arr[j+1] = arr[j]
        j -= 1
    arr[j+1] = key
 

print("Sorted Array = ",end = " ")
print(arr)