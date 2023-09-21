import simpy

def sub(env):
    yield env.timeout(2)
    return 23

def parent(env):
    ret = yield env.process(sub(env))
    return ret
  
env = simpy.Environment()
env.process(parent(env))
env.run()