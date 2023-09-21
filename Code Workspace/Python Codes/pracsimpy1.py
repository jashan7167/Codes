import simpy
from random import randint
env = simpy.Environment()
str = simpy.Store(env,capacity=1)

def customer_gen(env,str):
    for i in range(2):
        yield env.process(customer(i,env,str))

def customer(name,env,str):
    print(f'Customer {name} arriving to the store at {env.now}')
    itemsc = randint(10,15)
    yield str.put(f'Billing reciept customer {name}')
    yield env.process(billingcounter(itemsc,name,env,str))

def billingcounter(itemsc,name,env,str):
    yield env.timeout(randint(0,5))
    print(f'Customer {name} approaching to the billing counter at {env.now}')
    yield env.timeout(2)
    item = str.get()
    print(f'Customer got the {item.value} at {env.now}')
    yield env.timeout(itemsc)
    payment = itemsc * 100
    print(f'Customer {name} leaving store at {env.now} after paying {payment}$ at the counter')


env.process(customer_gen(env,str))
env.run()