dit = { }

n = int(input("Enter the no of key value pairs you want to create: "))

for i in range(n):
    key,value = input().split()
    dit[key] = value 

print(dit)

dit2 = dit.copy()



print(dit.get(input( )))

print(dit.items())

print(dit.keys())

print(dit.values())

print(dit.pop(input("Enter the key of the value you want to pop")))

print(dit.popitem(input("Enter the key value pair you want to delete")))

