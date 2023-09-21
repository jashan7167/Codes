import simpy

class GasStation:
    def __init__(self,env):
        self.env = env
        self.res = simpy.Resource(env,capacity = 2)
        self.gastank = simpy.Container(env,init=100,capacity=1000)
        self.mon_proc = env.process(self.monitor(env))
        self.car_genproc = env.process(self.car_gen(env))
    def monitor(self,env):
        while True:
            if self.gastank.level < 100:
                print(f'Calling tanker at {env.now}')
                env.process(self.tanker(env))
            
            yield env.timeout(15)
    
    def tanker(self,env):
        yield env.timeout(10)
        print(f'tanker arriving at {env.now}')
        am = self.gastank.capacity - self.gastank.level
        yield self.gastank.put(am)
    
    def car(self,name,env):
        print(f'Car {name} arriving at {env.now}')
        with self.res.request() as req:
            yield req
            print(f'Car refuling at {env.now}')
            yield self.gastank.get(40)
            print(f'Car{name} Done Refuling')
    def car_gen(self,env):
        for i in range(4):
            env.process(self.car(i,env))
            yield env.timeout(5)

env = simpy.Environment()
gasstation = GasStation(env)
env.run()
