# Definición de la clase Person para representar a una persona con nombre y edad.
class Person:
    # Constructor de la clase que inicializa una nueva instancia de Person.
    def __init__(self, name, age):
        self.name = name  
        self.age = age    
    # Método especial para sobrecargar el operador < (menor que).
    def __lt__(self, other):
        # Compara la edad de esta instancia (self) con otra instancia (other).
        return self.age < other.age

# Creación de dos instancias de la clase Person.
p1 = Person("Alice", 20)  
p2 = Person("Bob", 30)    
# Utilizando el operador sobrecargado < para comparar si p1 es menor que p2, es decir, si Alice es más joven que Bob.
print(p1 < p2)  # Imprime True ya que 20 es menor que 30.

# Utilizando el operador sobrecargado < para comparar si p2 es menor que p1, es decir, si Bob es más joven que Alice.
print(p2 < p1)  # Imprime False ya que 30 no es menor que 20.
