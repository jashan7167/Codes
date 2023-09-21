import simpy

def subfunc(env):
    print(env.active_process)

def proc(env):
    while True:
         print(env.active_process)
         subfunc(env)
         yield env.timeout(1)

env = simpy.Environment()
p1 = env.process(proc(env))
print(env.active_process)
env.step()
print(env.active_process)