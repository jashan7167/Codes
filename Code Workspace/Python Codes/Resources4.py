import simpy

def resourcez(name,env,res,wait,prio):
    yield env.timeout(wait)
    with res.request(prio) as req:
        print(f'{name} requesting at {env.now} with priority={prio}')
        yield req
        print(f'{name} got resource at {env.now}')
        try:
         yield env.timeout(3)
        except simpy.Interrupt as interrupt:
           by = interrupt.cause.by
           print(f'{name} got interrupted by {by} at {env.now}')




env = simpy.Environment()
res = simpy.PreemptiveResource(env,capacity=1)
p1 = env.process(resourcez(1,env,res,0,0))
p2 = env.process(resourcez(2,env,res,1,0))
p3 = env.process(resourcez(3,env,res,2,-1))
env.run()

