import threading
import time
exitflag = 0
class myThread (threading.Thread):
    def __init__(self,threadId,name,counter):
        threading.Thread.__init__(self)
        self.threadId = threadId
        self.name = name
        self.counter = counter

        def run(self):
            print("starting " + self.name)
            print_time(self.name,self.counter,5)
            print("Exiting" + self.name)

def print_time(threadname,delay,counter):
        print("%s:%s"%threadname,time.ctime(time.time()))
        


thread1 = myThread(1,"Thread1",1)
thread2 = myThread(2,"Thread2",2)


thread1.start()
thread2.start()

print("Exiting main thread")