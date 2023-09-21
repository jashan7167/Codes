
from cmath import phase
from ctypes.wintypes import PHKEY


class student:
    marks = []
    def __init__(self,name,m1,m2,m3):
        student.name = name
        student.marks.append(m1)
        student.marks.append(m2)
        student.marks.append(m3)
    def output(self):
        print("Name : ",student.name)
        print("Physics Marks: ",student.marks[0])
        print("Maths Marks: ",student.marks[1])
        print("Chemistry Marks: ",student.marks[2])
    def average(self):
        av = student.marks[0] + student.marks[1] + student.marks[2]
        av = av/3
        print("Average:  %d"%av)
    def max(self):
        max1 = 0
        if student.marks[0]>student.marks[1]:
            if student.marks[0]>student.marks[2]:
                max1 = student.marks[0]
        elif student.marks[1]>student.marks[2]:
            max1 = student.marks[1]
        else:
            max1 = student.marks[2]
        a = student.marks.index(max1)
        if a==0:
            print("Physics has the highest")
        elif a == 1:
            print("Maths has the highest")
        else:
            print("Chemistry has the highest")


a = input("Enter the name of the student: ")
p = int(input("Enter The Physics Marks: "))
m = int(input("Enter The Maths Marks: "))
c = int(input("Enter The Chemistry Marks: "))

ob = student(a,p,m,c)
ob.output()
ob.average()
ob.max()





