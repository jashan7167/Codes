arr = []
n =int( input("Enter the no of values you want to store in the array: "))

for i in range(n):
    val = int(input("Enter the value: "))
    arr.append(val)


print("Unsorted Array= " ,end = " ")
print(arr)



print(len(arr))
for i in range(len(arr)):
    min_idx = i
    for j in range(i+1,len(arr),1):
        if(arr[min_idx]>arr[j]):
            min_idx = j
    temp = arr[i]
    arr[i] = arr[min_idx]
    arr[min_idx] = temp

    

print("Sorted Array: ",end = " ")
print(arr)