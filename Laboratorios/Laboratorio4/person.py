class Person:
    # El metodo __init__ se llama cuando se crea una nueva instancia de la clase.
    def __init__(self, name, age):
        self.name = name 
        self.age = age   

    # El metodo display_info imprime la informacion de la instancia de Person.
    def display_info(self):
        # Esta linea imprime el nombre y la edad de la persona en un string formateado basicamente.
        print(f"Name: {self.name}\nAge: {self.age}")
