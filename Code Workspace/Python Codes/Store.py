import simpy

def Producer(env,str):
    for i in range(100):
        yield env.timeout(2)
        yield str.put(f'spam {i}')
        print('Produced spam at ',env.now)

def Consumer(name,env,str):
    while True:
        yield env.timeout(1)
        print(f'{name} requesting spam at {env.now}')
        item = yield str.get()
        print(f'Got item at {env.now}')

env = simpy.Environment()
store = simpy.Store(env,capacity=1)
prod = env.process(Producer(env,store))
for i in range(2):
    env.process(Consumer(i,env,store))

env.run()