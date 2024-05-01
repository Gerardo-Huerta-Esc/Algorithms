"""
"In this exercise, you will implement a Fish class with methods swim() and breathe_underwater(),
 and a Bird class with methods fly() and lay_eggs(). Then, you will create a subclass Penguin that
  inherits from both classes (multiple inheritance) to represent a penguin, which can swim and lay eggs."
"""

class Fish():
    def __init__(self):
        pass
    def swim(self,state):
        if state == "I'm not doing anything.":
            state = "I'm swimming"
            print(state)
    def breathe_underwater(self):
        pass

class Bird():
    def __init__(self):
        pass

    def  fly(self):
        pass

    def lay_eggs(self,state):
        if state == "I'm not doing anything.":
            state = "I'm laying eggs"
            print(state)

class Penguin(Fish,Bird):
    def __init__(self):
        self.state = "I'm not doing anything."
        Fish.__init__(self)
        Bird.__init__(self)

    def swim(self):
        return super().swim(self.state)

    def lay_eggs(self):
        return super().lay_eggs(self.state)

penguin = Penguin()

def main():
    penguin.swim()
    penguin.lay_eggs()

if __name__ == '__main__':
    main()







