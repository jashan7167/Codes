from operator import truediv


def is_leap(year):
    leap = False
    leap1 = True
    
 
    
     
    if year%4==0 or year%400==0:
     return leap1
    elif year%100==0:
     return leap
    elif year==2100:
     return leap
    else:
     return leap

year = int(input())
a = is_leap(year)
print(a)