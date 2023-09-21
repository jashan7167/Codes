a = int(input("Enter the no of elements: "))
t = []
for i in range(a):
    b = int(input("Enter the value: "))
    t.append(b)

t = tuple(t)
print(t)
print(type(t))

b = int(input("Enter the value: "))
print(t.count(b))
print(t.index(b))