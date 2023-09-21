import simpy

def printz(evn):
    for i in range(2):
        print('Jashan')
        yield evn

def trigger(env,evn):
    for i in range(2):
        yield env.timeout(40)
        evn.succeed()
        evn = env.event()
        print()

env = simpy.Environment()
evn =  env.event()
for i in range(2):
    env.process(printz(evn))
trigger(env,evn)
env.run()

