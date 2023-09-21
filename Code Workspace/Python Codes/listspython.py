from itertools import count
from operator import index
from os import remove


arr = []

n = int(input("Enter the no of values you want to enter:  "))

for i in range(n):
    a = int(input("Enter the value: "))
    arr.append(a) #  first method

# methods for lists
# count
# index
# remove
# reverse
# sorted
# insert\'
arr1 = arr.copy()
print(arr1)

b = int(input("Enter the value of which you want to find the frequency:  "))
print(arr.count(b))

# c = int(input("Enter the value upto which you want to  extend the list: "))
# arr.extend(c)
# print(arr)

c = int(input("Enter the value of which you want to find the index of:  "))
print(arr.index(c))

c = int(input("Enter the index at which you want to insert the value:  "))
d = int(input("Enter the value you want to insert: "))

arr.insert(c,d)
print(arr)

c = int(input("Enter the index at which you want to remove the value:  "))
arr.pop(c)

c = int(input("Enter the value you want to remove the first encountered iteration:  "))
arr.remove(c)
print(arr)

print(arr.reverse())

print(arr.sort())

print(arr.clear())

