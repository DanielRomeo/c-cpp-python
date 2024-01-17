
class Cicle:
    def __init__(self, center : int, radius: int) -> None:
        self.center = center
        self.radius = radius

class Person:
    def __init__(self, fname: str, lname: str ):
        self.__fname = fname
        self.__lname = lname
    
    def greet(self) -> str:
        return "Hello"

    
class Chef(Person):
    def __init__(self, fname: str, lname: str):
        super().__init__(fname, lname)

    
    
