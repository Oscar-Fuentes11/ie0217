# Definir la clase
class Room:
    def __init__(self):
        self.length = 0.0
        self.breadth = 0.0

    # Método para calcular el área
    def calculate_area(self):
        print("Area of Room =", self.length * self.breadth)

# Crear un objeto de la clase Room
study_room = Room()

# Asignar valores a los atributos
study_room.length = 42.5
study_room.breadth = 30.8

# Acceder al método dentro de la clase
study_room.calculate_area()
