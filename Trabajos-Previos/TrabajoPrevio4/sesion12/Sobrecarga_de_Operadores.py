# Definición de la clase Point para representar puntos en un plano 2D.
class Point:
    # Constructor con valores predeterminados para permitir la creación de un punto sin especificar x e y.
    def __init__(self, x=0, y=0):
        self.x = x  
        self.y = y 

    # Método especial para convertir el punto en una cadena de caracteres con formato (x, y).
    def __str__(self):
        return "({0},{1})".format(self.x, self.y)

    # Método especial que permite 'sumar' dos objetos Point, devolviendo un nuevo punto con la suma de sus coordenadas.
    def __add__(self, other):
        x = self.x + other.x  
        y = self.y + other.y  
        return Point(x, y)    

# Creación de dos instancias de la clase Point.
p1 = Point(1, 2)  
p2 = Point(2, 3)  

# Impresión del resultado de la suma de p1 y p2 utilizando el método __add__ sobrecargado.
print(p1 + p2)  


