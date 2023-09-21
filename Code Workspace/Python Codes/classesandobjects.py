
class vehicle():
    def __init__(self,mileage,max_speed):
        self.mileage = mileage
        self.max_speed = max_speed
    def out(self):
        print("Mileage = ",self.mileage,"  MaxSpeed= ",self.max_speed)



a = int(input("Enter the mileage:  "))
b = int(input("Enter the  maxspeed: "))
ob = vehicle(a,b)
ob.out()