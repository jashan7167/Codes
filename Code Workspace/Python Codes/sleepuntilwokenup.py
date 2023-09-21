import simpy

class Ev:
    def __init__(self,env):
        self.env = env
        self.drive_proc = env.process(self.drive(env))
        self.batctrL_proc = env.process(self.batctrl(env))
        self.reactivate = env.event()
    
    def drive(self,env):
        yield env.timeout(10)

        print('Start Parking at  ',env.now)
        self.reactivate.succeed()
        self.reactivate = env.event()
        yield env.timeout(10)
        print('Stop parking at ',env.now)

    def batctrl(self,env):
        print('Battery passivating at ',env.now)
        yield self.reactivate
        print('Battery Reactivated at ',env.now)

        yield env.timeout(10)

env = simpy.Environment()
ev = Ev(env)
env.run()

