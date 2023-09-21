

s = input("Enter the string:  ")

# Methods for string
# capatailize
# count
# find
# index
# isalnum
# isalpha
# isascii
# isdecimal
# isdigit
# lstrip
# rstrip
# partition
# replace
# rfind
# lfind
# split r and l
# swapcase
# title

print(s.capitalize())

a = input("Enter the char you want to find the count of: ")
print(s.count(a))

b =  input("Enter the char you want to find the index of: ")
print(s.index(b))

# c = input("Enter the char of which you want to find the first position of:  ")
# print(s.lfind(c))

d = input("Enter the char of which you want to find the last  position of:  ")
print(s.rfind(d))

print("Lower Case: ")
print(s.lower())

print("Upper Case: ")
print(s.upper())

print("Swap Case: ")
print(s.swapcase())

print("Title Case: ")
print(s.title())

# s2 = input("Enter the second string: ")
# b = input("Enter the strip delimiter: ")
# print(s2.strip('b'))


s3 = input("Enter the third string: ")
print(s3.split('.'))
