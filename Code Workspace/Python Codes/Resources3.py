import simpy

def resourcez(name,env,res,wait,prio):
    yield env.timeout(wait)
    with res.request(prio) as req:
        print(f'{name} requesting at {env.now} with priority={prio}')
        yield req
        print(f'{name} got resource at {env.now}')
        yield env.timeout(3)




env = simpy.Environment()
res = simpy.PriorityResource(env,capacity=1)
p1 = env.process(resourcez(1,env,res,0,0))
p2 = env.process(resourcez(2,env,res,1,0))
p3 = env.process(resourcez(3,env,res,2,0))
env.run()

