import simpy

def test(env):
    t1,t2 = env.timeout(3,value='spam'),env.timeout(2,value='eggs')
    ret = yield t1 | t2
    print(f'{ret} at {env.now}')

    t1,t2 = env.timeout(3,value='spam'),env.timeout(2,value='eggs')
    ret = yield t1 & t2
    print(f'{ret} at {env.now}')

env =  simpy.Environment()
env.process(test(env))
env.run()