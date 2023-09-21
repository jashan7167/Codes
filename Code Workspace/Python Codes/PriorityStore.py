import simpy

env = simpy.Environment()
prio = simpy.PriorityStore(env,capacity=1)

def inspector(env,prio):
    for i in [simpy.PriorityItem('P2','#001'), 
              simpy.PriorityItem('P1','#0041'), 
              simpy.PriorityItem('P3','#0021'), 
              simpy.PriorityItem('P4','#0011')]:
        yield env.timeout(1)
        yield prio.put(i)

def maintainer(env,prio):
    while True:
        yield env.timeout(3)
        item = prio.get()
        print(f'{item.value} retrieved at {env.now}')

_=env.process(inspector(env,prio))
_=env.process(maintainer(env,prio))
env.run()
