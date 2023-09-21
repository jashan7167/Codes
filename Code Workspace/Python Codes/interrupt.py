import simpy

class Ev:
    def __init__(self,env):
        self.env = env
        self.drive_proc = env.process(self.drive(env))
       
    
    def drive(self,env):
        yield env.timeout(10)

        print('Start Parking at  ',env.now)
        charging = env.process(self.batctrl(env))
        parking = env.timeout(1)
        yield charging | parking
        if not charging.triggered:
            charging.interrupt('Need To Go')
        print('Stop parking at ',env.now)

    def batctrl(self,env):
        print('Battery passivating at ',env.now)
        try:
            yield env.timeout(20)
            print('Bat. ctrl. done at', env.now)
        except simpy.Interrupt as i:
            print(f'Batctrl interrupted at {env.now} and msg:{i.cause}')


env = simpy.Environment()
ev = Ev(env)
env.run()

