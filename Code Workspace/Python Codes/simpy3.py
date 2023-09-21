import simpy

class School:
    def __init__(self, env):
        self.class_ends = env.event()
        self.env = env
        self.pupil_procs = [env.process(self.pupil()) for i in range(3)]
        self.bell_proc = env.process(self.bell())
    def bell(self):
        for i in range(1):
            yield self.env.timeout(2)
            self.class_ends.succeed()
            self.class_ends = self.env.event()
            print()
    def pupil(self):
        for i in range(2):
            print(r' \o/', end='')
            yield self.class_ends
env = simpy.Environment()
school = School(env)
env.run()