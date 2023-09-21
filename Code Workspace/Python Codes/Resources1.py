import simpy

def resourcez(env,res):
    req = res.request()
    yield req
    yield env.timeout(5)
    res.release(req)
    print(env.now)
    




env = simpy.Environment()
res = simpy.Resource(env,capacity=1)
user = env.process(resourcez(env,res))
env.run()
